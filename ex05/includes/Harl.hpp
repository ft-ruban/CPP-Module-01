/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 11:57:01 by ldevoude          #+#    #+#             */
/*   Updated: 2026/01/20 11:57:02 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl{
    public:
        Harl( void );
        ~Harl( void );
        void complain( std::string level );

    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
};

#endif