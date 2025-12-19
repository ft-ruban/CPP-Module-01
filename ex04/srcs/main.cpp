
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

#include <iostream>
#include <fstream>
#include <string>
int main(int argc, char **argv){
    std::string line_content;
    std::string occurence_to_change;
    std::string change_content;
    if(argc!= 4){
        std::cout<<"invalid number of parameters (require 3)"<<std::endl;
        return(1);
    }
    occurence_to_change = argv[2];
    change_content = argv[3];


    std::cout<<occurence_to_change; //TODL
    std::ifstream my_file_in(argv[1], std::ifstream::in);
    //open <filename> and copy content into new file
    //<filename>.replace replacing every s1 into a s2

    while(getline(my_file_in, line_content)){
        std::size_t found = line_content.find(occurence_to_change);
        std::cout<<found;
        if(found != std::string::npos)
        {
            std::cout<<"needle detected";
        }
        else
            std::cout<<line_content;
    }
    
  my_file_in.close();

    std::cout<<"Hello World"<<std::endl;
    return(0);
}