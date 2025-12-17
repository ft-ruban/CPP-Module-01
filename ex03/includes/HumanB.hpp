#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB{
    public:
    HumanB ( std::string given_name );
    ~HumanB ( void );
    void setWeapon(Weapon &weap_to_set){
        _current_weapon = &weap_to_set;
    }
    void setName(std::string name_to_set){
        _current_name = name_to_set;
    }
    void attack(){
        std::cout<<_current_name<<" attacks with their "<<_current_weapon->getType()<<std::endl;
    }


    private:
    Weapon *_current_weapon;
    std::string _current_name;

};

#endif