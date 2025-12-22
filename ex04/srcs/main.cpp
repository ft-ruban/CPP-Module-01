#include <iostream>
#include <fstream>
#include <string>
// Create a program that takes three parameters in the following order:
// a filename and
// two strings, s1 and s2.
// It must open the file <filename> and copy its content into a new file
// <filename>.replace, replacing every occurrence of s1 with s2.
// Using C file manipulation functions is forbidden and will be
// considered cheating. All
// the member functions of the class std::string are allowed, except replace. Use them
// wisely!
// Of course, handle unexpected inputs and errors. You must create and turn in your
// own tests to ensure that your program works as expected.

int parsing(int argc){
    if(argc != 4){
        std::cout<<"invalid number of parameters (require 3)"<<std::endl;
        return(1); //todo return failure
    }
    return(0);
}

int file_handler(std::ifstream* my_file_in, char **argv,
        std::string replace_file_name, std::ofstream* replace_file_ofstream){
    my_file_in->open(argv[1], std::ifstream::in);
    if(!my_file_in->is_open()){
        std::cout<<"Error: unable to open '" << argv[1] << "' (file does not exist or incorrect path or permission's related issue)"<<std::endl;
        return(1);
    }
    replace_file_name += ".replace";
    replace_file_ofstream->open(replace_file_name.c_str());
    if(!replace_file_ofstream->is_open()){
        std::cout<<"Error: unable to create '" << replace_file_name << "' (permissions, ?)"<<std::endl;
        my_file_in->close();
        return(1);
    }
    return(0);
}

int main(int argc, char **argv){
    std::string line_content;
    std::string str_buffer;
    std::size_t found = 0;
    std::ifstream my_file_in;
    std::ofstream replace_file_ofstream;
    bool first_iteration = true;

    if(parsing(argc)){
        return(1);
    }
    std::string occurence_to_change = argv[2];
    std::string change_content = argv[3];
    std::string replace_file_name = argv[1];
    if(file_handler(&my_file_in, argv, replace_file_name, &replace_file_ofstream)){
        return(2);
    }


    while(getline(my_file_in, line_content)){
        if(!first_iteration)
            replace_file_ofstream<< std::endl;
        first_iteration = false;
        for(std::size_t pos_a = 0; pos_a != std::string::npos; pos_a = found+1){
            found = line_content.find(occurence_to_change, pos_a);
            if(found != std::string::npos){
                std::cout<<"needle detected";
                std::cout<<found<<std::endl;
                str_buffer.append(line_content, pos_a, found);
                str_buffer.append(change_content);
                //str_buffer.append(" ");
                //replace_file_ofstream << str_buffer;
                found = found + occurence_to_change.size() -  1;
                std::cout<<found;
            }
            else{
                str_buffer.append(line_content, pos_a, found);
                replace_file_ofstream << str_buffer;
                str_buffer.clear();
                break;
            }
                
        }
    }
    
    my_file_in.close();
    replace_file_ofstream.close();
    return(0);
}