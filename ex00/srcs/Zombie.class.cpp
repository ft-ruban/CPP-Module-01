#include <iostream>
#include "../includes/Zombie.class.hpp"

// Zombie( void );
        // ~Zombie( void );
        // void announce( void );

Zombie::Zombie( void ){
    std::cout<<"Zombie created"<<std::endl; //todl
    return;
}

Zombie::~Zombie( void ){
    std::cout<<"Zombie \""<<name<<"\" destroyed."<<std::endl;
    return;
}