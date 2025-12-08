#include "../includes/BraiiiiiiinnnzzzZ.hpp"
#include "../includes/Zombie.class.hpp"
#include <iostream>

//TODO ask si on a le droit a un setter

Zombie* newZombie( std::string name){
    Zombie* newzombie = NULL;
    try{
        newzombie = new Zombie();
    }
    catch(std::bad_alloc & ba){
        std::cerr << "bad_alloc caught: " << ba.what()<<std::endl;
        return(NULL);
    }
    newzombie->name_set(name);
    newzombie->announce();
    return (newzombie);
}
void randomChump( std::string name){
    Zombie chump;
    chump.name_set(name);
    chump.announce();
}

int main(void){
    Zombie* z1 = newZombie("bob");

    if(!z1)
        return(1);
    randomChump("bub");
    delete(z1);
    return(0);
}