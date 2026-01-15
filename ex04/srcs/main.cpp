/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 14:03:46 by ldevoude          #+#    #+#             */
/*   Updated: 2025/12/22 14:46:27 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/sed_is_for_losers.hpp"

// 1) create the needed variables (ifstream + ofstream)
// 2) parsing function
// 3) function that handle the opening / creation / naming of the files (after that function)
//    the files are OPEN so it is required to close it in the end.
// 4) once we got all we need and the arguments are valid we get into fill_target_file to
//    handle the execution part of our program
// 5) close the necessary files.

int main(int argc, char **argv){
    std::ifstream source_file_ifstream;
    std::ofstream target_file_ofstream;

    if(parsing(argc))
        return(INVALID_ARGC_NBR);
    if(file_handler(&source_file_ifstream, argv, argv[1], &target_file_ofstream))
        return(FILE_HANDLER_FAILURE);
    fill_target_file(&source_file_ifstream, &target_file_ofstream, argv[2], argv[3]);
    close_files(&source_file_ifstream, &target_file_ofstream);
    return(EXIT_SUCCESS);
}
