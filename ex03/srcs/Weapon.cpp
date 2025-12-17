#include "../includes/Weapon.hpp"
#include <iostream>

Weapon::Weapon( std::string weapon_type ){
    Weapon::setType(weapon_type);
    return;
}
Weapon::~Weapon( void ){
    return;
}