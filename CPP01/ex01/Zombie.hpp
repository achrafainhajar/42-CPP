/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:19:06 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/23 09:21:30 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE.HPP
#define ZOMBIE.HPP

#include <iostream>
class Zombie
{
    std::string name;
    public:
    void set(std::string s);
    std::string get_name();
    void set_name(std::string namee);
    void announce( void );
    Zombie* newZombie( std::string name );
    Zombie* zombieHorde( int N, std::string name );
    void randomChump( std::string name );
    ~Zombie()
    {
        std::cout << this->name << " has been destroyed" << std::endl;
    }
};
#endif