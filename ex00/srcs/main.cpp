/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 08:11:42 by ldevoude          #+#    #+#             */
/*   Updated: 2026/01/13 10:51:00 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void randomChump( std::string name);
Zombie* newZombie( std::string name);

// 1) we create a instance of zombie via a ptr by allocating it on the heap with newZombie function
//    (we name it bob for that test but the user can name it with wathever name tbh)
// 2) RandomChump create a zombie in the stack,
// 3) we have to delete z1 (and any zombies created from newZombie) 
//    before exiting our program.

int main(void){
    Zombie* z1 = newZombie("Bob");

    if(!z1)
        return(1);
    randomChump("bub");
    delete(z1);
    return(0);
}