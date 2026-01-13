/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 08:12:16 by ldevoude          #+#    #+#             */
/*   Updated: 2026/01/13 10:46:05 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

// 1) make an instance of the class zombie called chump
// 2) name our little chumpy
// 3) announce itself
// 4) get destroyed as it cannot live outside the scope of that function.

void randomChump( std::string name){
    Zombie chump;
    chump.nameSet(name);
    chump.announce();
}