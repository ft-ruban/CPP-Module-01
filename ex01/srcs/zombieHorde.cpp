/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:00:22 by ldevoude          #+#    #+#             */
/*   Updated: 2025/12/08 15:14:05 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

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