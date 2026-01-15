/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:51:34 by ldevoude          #+#    #+#             */
/*   Updated: 2026/01/13 13:52:00 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string human_name, Weapon& human_weapon)
: _human_weapon(human_weapon)
{
    HumanA::setWeapon(human_weapon);
    HumanA::setName(human_name);
}

HumanA::~HumanA (){
}

void HumanA::setWeapon(Weapon human_weapon){
        _human_weapon = human_weapon;
}

void HumanA::setName(std::string human_name){
        _name = human_name;
}

void HumanA::attack( void ){
        std::cout<<_name<<" attacks with their "<<_human_weapon.getType()<<std::endl;
}
