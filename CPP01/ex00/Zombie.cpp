/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:16:57 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/24 00:28:08 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string namee)
{
    this->name = namee;
}
Zombie::Zombie(){
    std::cout << "Default Constructor Called"<< std::endl;
}
void Zombie::set(std::string s)
{
    name = s;
}
void Zombie::announce( void )
{
    std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}
Zombie::~Zombie()
{
    std::cout << this->name << " has been destroyed" << std::endl;
}