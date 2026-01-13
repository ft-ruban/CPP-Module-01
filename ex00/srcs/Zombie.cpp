/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 08:12:19 by ldevoude          #+#    #+#             */
/*   Updated: 2026/01/13 10:49:36 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

// 1) our constructor

Zombie::Zombie( void ){
    return;
}

// 1) our destroyer that tell the user with a message the instance has been terminated.

Zombie::~Zombie( void ){
    std::cout<<"Zombie \""<<_name<<"\" destroyed."<<std::endl;
    return;
}

// 1) that method make the zombie to print <zombie's name>: BraiiiiiiinnnzzzZ...
// 2) thats it.

void Zombie::announce ( void ){
    std::cout<<Zombie::_name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
    return;
}

// 1) set the string sent into the parameter as the name of our zombie.

void Zombie::nameSet(std::string name_to_set){
    _name = name_to_set;
    return;
}