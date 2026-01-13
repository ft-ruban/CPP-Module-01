/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:52:04 by ldevoude          #+#    #+#             */
/*   Updated: 2026/01/13 13:52:07 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include "iostream"

class Weapon{
    public:
    Weapon( std::string weapon_type );
    ~Weapon( void );
    const std::string &getType( void ) const;
    void setType( std::string new_value);

    private:
    std::string type;
};

#endif