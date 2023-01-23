/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:17:02 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/23 23:44:53 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
class Zombie
{
    std::string name;
    public:
    Zombie();
    Zombie(std::string namee)
    {
        this->name = namee;
    }
    void set(std::string s);
    void announce( void );
    ~Zombie();
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif