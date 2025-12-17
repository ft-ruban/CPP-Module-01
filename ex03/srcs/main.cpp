/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:00:15 by ldevoude          #+#    #+#             */
/*   Updated: 2025/12/17 16:24:55 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "../includes/Weapon.hpp"
#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"

int main()
{
{
Weapon calabdolg = Weapon("Caladbolg");
HumanA bob("Bob", calabdolg);
bob.attack();
calabdolg.setType("ascended Caladbolg");
bob.attack();
}
{
Weapon laevateinn = Weapon("Laevateinn");
HumanB jim("Jim");
jim.setWeapon(laevateinn);
jim.attack();
laevateinn.setType("cursed Laevateinn");
jim.attack();
}
return 0;
}