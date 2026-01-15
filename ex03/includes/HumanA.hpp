/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:52:16 by ldevoude          #+#    #+#             */
/*   Updated: 2026/01/13 13:52:19 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{
    public:
    HumanA(std::string human_name, Weapon& human_weapon);
    ~HumanA();
    void setWeapon(Weapon human_weapon);
    void setName(std::string human_name);
    void attack();
    
    private:
    std::string _name;
    Weapon& _human_weapon;
};

#endif