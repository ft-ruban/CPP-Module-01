/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:50:15 by ldevoude          #+#    #+#             */
/*   Updated: 2026/01/13 13:50:17 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include <iostream>

Weapon::Weapon( std::string weapon_type ){
    Weapon::setType(weapon_type);
    return;
}
Weapon::~Weapon( void ){
    return;
}
const std::string &Weapon::getType(void) const {
    return this->type;
}
void Weapon::setType( std::string new_value){
        Weapon::type = new_value;
}
