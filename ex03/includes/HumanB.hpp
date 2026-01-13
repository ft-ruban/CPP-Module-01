/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:52:13 by ldevoude          #+#    #+#             */
/*   Updated: 2026/01/13 13:52:15 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB{
    public:
    HumanB(std::string given_name );
    ~HumanB();
    void setWeapon(Weapon &weap_to_set);
    void setName(std::string name_to_set);
    void attack();

    private:
    Weapon *_current_weapon;
    std::string _current_name;
};

#endif