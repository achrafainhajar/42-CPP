/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:19:06 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/24 00:33:37 by aainhaja         ###   ########.fr       */
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
    Zombie(std::string name);
    std::string get_name();
    void set_name(std::string namee);
    void announce( void );
    ~Zombie();
};
void randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name);
Zombie* newZombie( std::string name );
#endif