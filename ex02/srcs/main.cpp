/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 11:51:19 by ldevoude          #+#    #+#             */
/*   Updated: 2026/01/13 11:41:39 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// 1) we create the string that contain HI THIS IS BRAIN
// 2) assign a ptr to the address of the said string
// 3) assign a reference to the string hi
// 4) print the memory address of hi, the one of our ptr and then our ref
// 5) then the value of hi, stringPTR and stringREF
// 6) end

int main(void){
    std::string hi = "HI THIS IS BRAIN";
    std::string* stringPTR = &hi;
    std::string& stringREF = hi;

    std::cout<<stringPTR<<std::endl;
    std::cout<<&stringPTR<<std::endl;
    std::cout<<stringPTR<<std::endl;

    std::cout<<hi<<std::endl;
    std::cout<<stringPTR<<std::endl;
    std::cout<<stringREF<<std::endl;
    return(0);
}
