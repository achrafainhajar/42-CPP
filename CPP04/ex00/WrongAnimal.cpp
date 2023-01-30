/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:13:02 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/30 09:35:15 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    
}
void WrongAnimal::makeSound()const
{
    std::cout << "Wrong Animal sound" << std::endl;
}
std::string WrongAnimal::getType() const
{
    return(type);
}
WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
    this->type = a.type;
}
WrongAnimal & WrongAnimal::operator=(const WrongAnimal &other)
{
    type = other.type;
    return(*this);
}
WrongAnimal::~WrongAnimal()
{
    
}