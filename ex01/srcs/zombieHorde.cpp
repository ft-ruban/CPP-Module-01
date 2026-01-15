/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:00:22 by ldevoude          #+#    #+#             */
/*   Updated: 2026/01/13 11:33:58 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

// 1) check if the name is empty and/or if N is 0 or a negative value return an error if it is the case
//    (note that it is a personal design choice as I consider I should not allow someone doing such thing with the function)
// 2) try new[] to allocate N number of zombies if a bad alloc is caught ba is a variable that refer
//    to an instance of that type in a catch block
// 3) for loop to give a little name to each of our zombies
// 4) return our new_zombies

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* new_zombies = NULL;
    
    if(name.empty() || N <= 0){
        std::cout<<"zombieHorde require a string name that is not empty, and N cannot be 0 or negative"<<std::endl;
        return(NULL);
    }
    try{
        new_zombies = new Zombie[N];
    }
    catch(std::bad_alloc & ba){
        std::cout << "bad_alloc caught: " << ba.what()<<std::endl;
        return(NULL);
    }
    for(int i = 0; i < N; i++){
        new_zombies[i].name_Set(name);
    }
    return (new_zombies);
}
