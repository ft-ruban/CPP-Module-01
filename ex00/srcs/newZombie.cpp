/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 08:12:12 by ldevoude          #+#    #+#             */
/*   Updated: 2025/12/17 11:48:14 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* newZombie( std::string name){
    Zombie* newzombie = NULL;
    try{
        newzombie = new Zombie();
    }
    catch(std::bad_alloc & ba){
        std::cout << "bad_alloc caught: " << ba.what()<<std::endl;
        return(NULL);
    }
    newzombie->name_set(name);
    //newzombie->announce();
    return (newzombie);
}