/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 11:57:07 by ldevoude          #+#    #+#             */
/*   Updated: 2026/01/22 06:12:04 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"
#include <ostream>

// 1) Main to test the Harl class user just have to write the right instruction
//    they wnat frim Harl and thats pretty much all.
//    it is protected in case user write no arguments.

int main(int argc, char **argv){
    Harl harl;
    if(argc != 2){
        std::cout<<"Error: c.22: no / too much arguments provided, please give a single instruction to Harl"<<std::endl;
        return(1);
    }
    harl.complain(argv[1]);
    return(0);
}