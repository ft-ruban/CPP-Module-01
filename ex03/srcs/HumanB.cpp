#include <iostream>
#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string given_name)
//: _current_weapon(_current_weapon)
{
    //HumanB::setWeapon(_current_weapon);
    HumanB::setName(given_name);
    HumanB::_current_weapon = NULL;
}

HumanB::~HumanB(){
}