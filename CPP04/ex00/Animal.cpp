/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:39:06 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/30 09:24:45 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

Animal::Animal()
{
    
}
Animal::Animal(const Animal &a)
{
    this->type = a.type;
}
Animal & Animal::operator=(const Animal &other)
{
    type = other.type;
    return(*this);
}
void Animal::makeSound()const
{}
Animal::~Animal()
{
    
}
std::string Animal::getType() const
{
    return(type);
}