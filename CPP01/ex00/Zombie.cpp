/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:16:57 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/23 09:17:00 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::set(std::string s)
{
    name = s;
}
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
void Zombie::randomChump( std::string name )
{
    Zombie p(name);
    p.announce();
}