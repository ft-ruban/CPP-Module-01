/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 08:11:42 by ldevoude          #+#    #+#             */
/*   Updated: 2025/12/17 11:48:09 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void randomChump( std::string name);
Zombie* newZombie( std::string name);

int main(void){
    Zombie* z1 = newZombie("bob");

    if(!z1)
        return(1);
    randomChump("bub");
    delete(z1);
    return(0);
}