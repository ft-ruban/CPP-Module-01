#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <iostream>

class Zombie {
    public:

        Zombie( void );
        ~Zombie( void );
        void announce( void ){
            std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
        }
        void name_set( std::string new_name){
            name = new_name;
        }

    private:
        std::string name;
};


#endif