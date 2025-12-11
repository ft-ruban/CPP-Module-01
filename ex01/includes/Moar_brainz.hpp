/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Moar_brainz.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 08:21:05 by ldevoude          #+#    #+#             */
/*   Updated: 2025/12/11 08:21:06 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOAR_BRAINZ_HPP
#define MOAR_BRAINZ_HPP

#include <iostream>
#include "../includes/Zombie.class.hpp"

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0
#define RETURN_FAILURE 1
#define RETURN_SUCCESS 0

//zombieHorde.c
Zombie* zombieHorde(int N, std::string name);

#endif