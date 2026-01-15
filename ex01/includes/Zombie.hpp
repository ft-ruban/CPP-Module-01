/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 08:18:27 by ldevoude          #+#    #+#             */
/*   Updated: 2026/01/13 11:13:44 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
    public:
        Zombie( void );
        ~Zombie( void );
        void announce( void );
        void name_Set( std::string new_name);

    private:
        std::string _name;
};

#endif