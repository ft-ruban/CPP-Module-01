#include <iostream>
#include "../includes/Zombie.class.hpp"

Zombie::Zombie( void ){
    return;
}

Zombie::~Zombie( void ){
    std::cout<<"Zombie \""<<name<<"\" destroyed."<<std::endl;
    return;
}