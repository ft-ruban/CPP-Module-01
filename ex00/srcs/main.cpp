#include "../includes/BraiiiiiiinnnzzzZ.hpp" //todo test without

//TODO ask si on a le droit a un setter

int main(void){
    Zombie* z1 = newZombie("bob");

    if(!z1)
        return(1);
    randomChump("bub");
    delete(z1);
    return(0);
}