/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed_is_for_losers.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 14:05:19 by ldevoude          #+#    #+#             */
/*   Updated: 2025/12/22 14:20:06 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SED_IS_FOR_LOSERS_HPP
# define SED_IS_FOR_LOSERS_HPP

#include <fstream>

#define RETURN_SUCCESS 0
#define RETURN_FAILURE 1
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

enum error_type {
  INVALID_ARGC_NBR = 1,
  FILE_HANDLER_FAILURE,
}; 

//utils.cpp
bool    parsing(int argc);
bool    file_handler(std::ifstream* source_file_ifstream, char **argv,
                        std::string new_file_ofstream_name, std::ofstream* target_file_ofstream);
void    close_files(std::ifstream* source_file_ifstream, std::ofstream* target_file_ofstream);
void    fill_target_file(std::ifstream* source_file_ifstream, std::ofstream* target_file_ofstream,
                            std::string occurence_to_replace, std::string replacement_content);

# endif