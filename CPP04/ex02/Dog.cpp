/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:03:50 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/02 15:12:14 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Constructor Called" <<std::endl;
    brain = new Brain;
    type = "Dog";
}
void Dog::makeSound() const
{
    std::cout<<"Woof Woof" << std::endl;
}
Dog::~Dog()
{
    std::cout << "Dog Destructor Called" <<std::endl;
    delete brain;
}
Dog::Dog(const Dog &a)
{
    std::cout << "Dog Copy Constructor Called" <<std::endl;
    this->type = a.type;
    brain = new Brain(*a.brain);
}
Dog & Dog::operator=(const Dog &other)
{
    std::cout << "Dog Copy Assigment Operator Called" <<std::endl;
    if(brain)
        delete brain;
    brain = new Brain(*other.brain);
    type = other.type;
    return(*this);
}