#include <iostream>
#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string human_name, Weapon& human_weapon)
: _human_weapon(human_weapon)
{
    HumanA::setWeapon(human_weapon);
    HumanA::setName(human_name);
    return;
}

HumanA::~HumanA ( void ){

}
