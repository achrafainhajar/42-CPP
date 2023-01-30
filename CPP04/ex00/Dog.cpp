/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:03:50 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/30 09:27:37 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog()
{
    type = "Dog";
}

void Dog::makeSound() const
{
    std::cout<<"Woof Woof" << std::endl;
}
Dog::~Dog()
{

}
Dog::Dog(const Dog &a)
{
    this->type = a.type;
}
Dog & Dog::operator=(const Dog &other)
{
    type = other.type;
    return(*this);
}