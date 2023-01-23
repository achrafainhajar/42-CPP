/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:17:02 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/23 09:17:03 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE.HPP
#define ZOMBIE.HPP

#include <iostream>
class Zombie
{
    std::string name;
    public:
    Zombie(){}
    Zombie(std::string namee)
    {
        this->name = namee;
    }
    void set(std::string s);
    void announce( void );
    Zombie* newZombie( std::string name );
    void randomChump( std::string name );
};
#endif