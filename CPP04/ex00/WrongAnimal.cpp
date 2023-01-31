/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:13:02 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/31 10:11:48 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "WrongAnimal Default Constructor Called" <<std::endl;
}
void WrongAnimal::makeSound()const
{
    std::cout << "WrongAnimal sound" << std::endl;
}
std::string WrongAnimal::getType() const
{
    return(type);
}
WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
    std::cout << "WrongAnimal Copy Constructor Called" <<std::endl;
    this->type = a.type;
}
WrongAnimal & WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "WrongAnimal Copy Assigment Operator Called" <<std::endl;
    type = other.type;
    return(*this);
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor Called" <<std::endl;
}