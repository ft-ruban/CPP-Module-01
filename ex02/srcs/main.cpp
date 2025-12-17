/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 11:51:19 by ldevoude          #+#    #+#             */
/*   Updated: 2025/12/17 11:51:39 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void){
    std::string string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;

    std::cout<<stringPTR<<std::endl;
    std::cout<<&stringPTR<<std::endl;
    std::cout<<stringPTR<<std::endl;

    std::cout<<string<<std::endl;
    std::cout<<stringPTR<<std::endl;
    std::cout<<stringREF<<std::endl;
    return(0);
}