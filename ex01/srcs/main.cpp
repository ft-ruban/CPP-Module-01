#include "../includes/Moar_brainz.hpp"

//TODO dl les files qui servent a rien

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* new_zombies = NULL;
    try{
        new_zombies = new Zombie[N];
    }
    catch(std::bad_alloc & ba){
        std::cerr << "bad_alloc caught: " << ba.what()<<std::endl;
        return(NULL);
    }
    for(int i = 0; i < N; i++){
        new_zombies[i].name_set(name);
    }
    return (new_zombies);
}


int main(void){
    Zombie* Horde;
    Zombie* Horde2;
    Horde = zombieHorde(5, "truc");
    Horde2 = zombieHorde(5, "muche");
    delete[] Horde;
    delete[] Horde2;

    return(0);
}