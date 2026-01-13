/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:50:29 by ldevoude          #+#    #+#             */
/*   Updated: 2026/01/13 13:50:40 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string given_name)
{
    HumanB::setName(given_name);
    HumanB::_current_weapon = NULL;
}

HumanB::~HumanB(){
}

void HumanB::setWeapon(Weapon &weap_to_set){
    HumanB::_current_weapon = &weap_to_set;
}

void HumanB::setName(std::string name_to_set){
    HumanB::_current_name = name_to_set;
}

void HumanB::attack(){
    std::cout<<_current_name<<" attacks with their "<<_current_weapon->getType()<<std::endl;
}
