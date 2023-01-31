/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:03:50 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/31 08:03:33 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Constructor Called" <<std::endl;
    type = "Dog";
}

void Dog::makeSound() const
{
    std::cout<<"Woof Woof" << std::endl;
}
Dog::~Dog()
{
    std::cout <<"Dog Destructor Called" << std::endl;
}
Dog::Dog(const Dog &a)
{
    std::cout << "Dog Copy Constructor Called" <<std::endl;
    this->type = a.type;
}
Dog & Dog::operator=(const Dog &other)
{
    std::cout << "Dog Copy Assigment Operator Called" <<std::endl;
    type = other.type;
    return(*this);
}