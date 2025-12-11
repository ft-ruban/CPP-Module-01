/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 08:18:27 by ldevoude          #+#    #+#             */
/*   Updated: 2025/12/11 08:18:28 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

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