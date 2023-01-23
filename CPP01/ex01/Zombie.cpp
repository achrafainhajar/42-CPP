/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:22:10 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/23 09:22:11 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void Zombie::set(std::string s)
{
    name = s;
}
std::string Zombie::get_name() {return this->name;}
void Zombie::set_name(std::string namee) {this->name = namee;}
void Zombie::announce( void )
{
    std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}
Zombie* Zombie::newZombie( std::string name )
{
    Zombie *p;
    p = new Zombie;
    p->name = name;
    return(p);
}
Zombie* Zombie::zombieHorde( int N, std::string name )
{
    Zombie *p;
    p = new Zombie[N];
    int i = 0;
    while(i < N)
    {
        p[i].name = name;
        i++;
    }
    return(p);
}
void Zombie::randomChump( std::string name )
{
    
}