/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 08:12:19 by ldevoude          #+#    #+#             */
/*   Updated: 2025/12/17 11:48:26 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie( void ){
    return;
}

Zombie::~Zombie( void ){
    std::cout<<"Zombie \""<<name<<"\" destroyed."<<std::endl;
    return;
}