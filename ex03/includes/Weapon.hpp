#ifndef WEAPON_HPP
# define WEAPON_HPP

#include "iostream"

class Weapon{
    public:
    Weapon( std::string weapon_type );
    ~Weapon( void );
    std::string getType( void ){
    return(type);
    }
    void setType( std::string new_value){
        type = new_value;
    }

    private:
    std::string type;
};

#endif