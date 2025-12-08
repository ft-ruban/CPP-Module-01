
#include "../includes/Moar_brainz.hpp"

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