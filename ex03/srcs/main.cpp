/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:00:15 by ldevoude          #+#    #+#             */
/*   Updated: 2025/12/11 08:17:45 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main(void){
    
    std::string string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;

    std::cout<<&string<<std::endl;
    std::cout<<&stringPTR<<std::endl;
    std::cout<<&stringREF<<std::endl;

    std::cout<<string<<std::endl;
    std::cout<<stringPTR<<std::endl;
    std::cout<<stringREF<<std::endl;

    return(0);
}