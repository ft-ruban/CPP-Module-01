/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 08:12:12 by ldevoude          #+#    #+#             */
/*   Updated: 2026/01/13 10:45:04 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

// 1) check if the string name is empty as I consider a name cannot be 'nothing' but the
//    program works well regardless if you remove that part that is just a personal choice.
// 2) we try new on newzombie, this way we can catch if there is a bad allocation during the process
//    and behave accordingly if so by warning the user (on the cout because the subject is kinda
//    forcing this into us even if it would make more sense to do std::cerr but anyway.
// 3) we give a cute (or not) little name to our zombie thanks to our name setter.
// 4) the subject doesnt say that zombie should announce itself IN CASE you wanna try you can
//    remove the commentary for the announcement otherwise leave it as it is.
// 5) and voila, a zombie has been created in the heap memory space.

Zombie* newZombie( std::string name){
    Zombie* newzombie = NULL;
    
    if(name.empty()){
        std::cout<<"newZombie require a string name that is not empty."<<std::endl;
        return(NULL);
    }
    try{
        newzombie = new Zombie();
    }
    catch(std::bad_alloc & ba){
        std::cout << "bad_alloc caught: " << ba.what()<<std::endl;
        return(NULL);
    }
    newzombie->nameSet(name);
    //newzombie->announce();
    return (newzombie);
}