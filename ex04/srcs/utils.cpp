/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 14:05:50 by ldevoude          #+#    #+#             */
/*   Updated: 2026/01/20 11:48:08 by ldevoude         ###   ########.fr       */
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


// 1) while loop that catch a line in ifstream to put it in line it continue until we stop catching lines
//    1.1) while we dont get any occurence to replace in a line (it show by updating found with npos)
//        1.1.1) fill result with everything UNTIL the occurence, then the replacement content then update pos
//    1.2) update our .replace before getting back to loop if there is still a line to read else get out of function

void fill_target_file(std::ifstream* source_file_ifstream, std::ofstream* target_file_ofstream,
        std::string occurence_to_replace, std::string replacement_content)
{
    std::string line;

    while (std::getline(*source_file_ifstream, line))
    {
        std::string result;
        std::size_t pos = 0;
        bool end_line = false;

        while (!end_line)
        {
            std::size_t found = line.find(occurence_to_replace, pos);

            if (found == std::string::npos)
            {
                result += line.substr(pos);
                end_line = true;
            }
            else{
                result += line.substr(pos, found - pos);
                result += replacement_content;
                pos = found + occurence_to_replace.size();
            }
        }
        *target_file_ofstream << result << std::endl;
    }
}



// 1) simple utils function to close our files when needed.

// void    close_files(std::ifstream* source_file_ifstream, std::ofstream* target_file_ofstream){
//     if(source_file_ifstream)
//         source_file_ifstream->close();
//     if(target_file_ofstream)
//         target_file_ofstream->close();
// }