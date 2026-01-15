/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 14:05:50 by ldevoude          #+#    #+#             */
/*   Updated: 2025/12/22 14:46:18 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/sed_is_for_losers.hpp"
#include <iostream>

// 1) simple function that write into the cout the msg sent in parameters
// 2) then return the return_value
// !!!CAUTION!!! as in our program only bool are used error_handler here is a bool and a bool value
//     if you change the program at some point to the point you need more than a bool you need to
//     modify that specificity to meet your needs + include a error_type parameter

static bool error_handler(std::string error_msg_1, std::string error_msg_2,
                              std::string error_msg_3){
    std::cout<<error_msg_1<<error_msg_2<<error_msg_3<<std::endl;
    return(1);
}

// 1) check if user gave the right amount of arguments if not return an error msg and a 1

bool parsing(int argc){
    if(argc != 4)
        return(error_handler("Error: c.32: invalid number of parameters (require 3)","",""));
    return(RETURN_SUCCESS);
}

// 1) we open the source file, if it doesnt exist/not right perm return an error
// 2) add the .replace for the name of our string right after the name of the source file.
// 3) open the new file and create it if it does not exist or reset it if already exist
//      also check if the user does have the perms if not close the source_file and return err

bool file_handler(std::ifstream* source_file_ifstream, char **argv,
                    std::string new_file_ofstream_name, std::ofstream* target_file_ofstream){
    source_file_ifstream->open(argv[1], std::ifstream::in);
    if(!source_file_ifstream->is_open()){
        return(error_handler("Error: c.45: unable to open '", argv[1],
                                "' (file does not exist or incorrect path or permission's related issue)"));
    }
    new_file_ofstream_name += ".replace";
    target_file_ofstream->open(new_file_ofstream_name.c_str());
    if(!target_file_ofstream->is_open()){
        source_file_ifstream->close();
        return(error_handler("Error: c.51: unable to create '", new_file_ofstream_name,"' (permissions, ?)"));
    }
    return(RETURN_SUCCESS);
}

// 1) simple utils function to close our files when needed.

void    close_files(std::ifstream* source_file_ifstream, std::ofstream* target_file_ofstream){
    if(source_file_ifstream)
        source_file_ifstream->close();
    if(target_file_ofstream)
        target_file_ofstream->close();
}

// 1) setup the necessary variables
// 2) while loop that will stay here until it caught all the newline of our source file
//    2.1) if not first iteration does a line return as getline doesnt include the newline itself
//         (and we dont want a new line at the very first iteration and once we are done)
//    2.2) for loop that will catch any occurence of the string we need to change (represented
//         by occurence_to_replace) if caught we append into our buffer the begining of the string
//         until we reach the begining of the occurence then we write the last argument of user
//         to just replace the words. once a whole line is done we append whats left and fill the
//         target file then clean buffer. 
//    2.3)  repeat until the EOF is reached.

void fill_target_file(std::ifstream* source_file_ifstream, std::ofstream* target_file_ofstream,
                        std::string occurence_to_replace, std::string replacement_content){
    std::string line_content;
    bool first_iteration = true;
    std::size_t found = 0;
    std::string str_buffer;

    while(getline(*source_file_ifstream, line_content)){
        if(!first_iteration)
            *target_file_ofstream<< std::endl;
        first_iteration = false;
        for(std::size_t pos_a = 0; pos_a != std::string::npos; pos_a = found+1){
            found = line_content.find(occurence_to_replace, pos_a);
            if(found != std::string::npos){
                str_buffer.append(line_content, pos_a, found);
                str_buffer.append(replacement_content);
                found = found + occurence_to_replace.size() -  1;
                std::cout<<found;
            }
            else{
                str_buffer.append(line_content, pos_a, found);
                *target_file_ofstream << str_buffer;
                str_buffer.clear();
                break;
            }
        }
    }
}
