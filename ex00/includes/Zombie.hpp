/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 08:12:07 by ldevoude          #+#    #+#             */
/*   Updated: 2025/12/17 11:25:03 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
    public:

        Zombie( void );
        ~Zombie( void );
        void announce( void ){
            std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
        }
        void name_set( std::string new_name){
            name = new_name;
        }

    private:
        std::string name;
};


#endif