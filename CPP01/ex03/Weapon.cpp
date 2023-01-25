/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:45:28 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/24 04:40:36 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}
Weapon::Weapon()
{
    std::cout << "Default Constructor Called" << std::endl;
}
Weapon::~Weapon()
{
    std::cout<<"Weapon Destructor Called"<<std::endl;
}
const  std::string & Weapon::getType(void)
{
    std::string &ref = type;
    return(ref);
}
void Weapon::setType(std::string str)
{
    this->type = str;
}