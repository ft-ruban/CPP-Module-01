#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{
    public:
    HumanA(std::string human_name, Weapon& human_weapon);
    ~HumanA();
    void setWeapon(Weapon human_weapon){
        _human_weapon = human_weapon;
    }
    void setName(std::string human_name){
        _name = human_name;
    }
    void attack( void ){
        std::cout<<_name<<" attacks with their "<<_human_weapon.getType()<<std::endl;
        return;
    }
    private:
    std::string _name;
    Weapon& _human_weapon;
};

#endif