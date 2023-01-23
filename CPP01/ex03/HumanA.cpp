/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:45:47 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/24 00:09:14 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout<<name<< " attacks with their "<< weapon.getType()<<std::endl;
}
HumanA::HumanA(std::string str,Weapon &club) : weapon(club)
{
    this->name = str;
}
HumanA::~HumanA()
{
    std::cout << "Destructor Called" << std::endl;
}