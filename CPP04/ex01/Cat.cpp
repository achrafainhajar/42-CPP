/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:08:07 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/30 10:19:01 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default Constructor Called" <<std::endl;
    brain = new Brain;
    type = "Cat";
}
void Cat::makeSound() const 
{
    std::cout<<"meow meow" << std::endl;
}
Cat::~Cat()
{
    std::cout << "Cat Destructor called" <<std::endl;
    delete brain;
}
Cat::Cat(const Cat &a)
{
    std::cout << "Cat Copy Constructor Called" <<std::endl;
    this->type = a.type;
    brain = new Brain(*a.brain);
}
Cat & Cat::operator=(const Cat &other)
{
    std::cout << "Cat Copy Assigment Operator Called" <<std::endl;
    delete brain;
    brain = new Brain;
    int i=0;
    while(i<100)
    {
        brain->getideas()[i] = other.brain->getideas()[i];
        i++;
    }
    type = other.type;
    return(*this);
}