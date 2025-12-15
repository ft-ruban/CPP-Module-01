/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:00:15 by ldevoude          #+#    #+#             */
/*   Updated: 2025/12/11 08:17:45 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );


int main(void){
    Zombie* Horde;
    Zombie* Horde2;
    std::size_t size_horde = 5;
    std::size_t size_horde2 = 10;
    
    Horde = zombieHorde(size_horde, "Truc");
    if(!Horde)
        return(1);
    Horde2 = zombieHorde(size_horde2, "Muche");
    if(!Horde2){
        delete[] Horde;
        return(1);
    }
    for(std::size_t i = 0; i < size_horde; i++)
        Horde[i].announce();
    for(std::size_t i = 0; i < size_horde2; i++)
        Horde2[i].announce();
    delete[] Horde;
    delete[] Horde2;

    return(0);
}