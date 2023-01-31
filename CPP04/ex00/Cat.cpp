/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:08:07 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/31 10:10:33 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default Constructor Called" <<std::endl;
    type = "Cat";
}
void Cat::makeSound() const 
{
    std::cout<<"meow meow" << std::endl;
}
Cat::Cat(const Cat &a)
{
    std::cout << "Cat Copy Constructor Called" <<std::endl;
    this->type = a.type;
}
Cat & Cat::operator=(const Cat &other)
{
    std::cout << "Cat Copy Assigment Operator Called" <<std::endl;
    type = other.type;
    return(*this);
}
Cat::~Cat()
{
      std::cout <<"Cat Destructor Called" << std::endl;
}