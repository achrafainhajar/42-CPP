/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:39:06 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/31 10:10:13 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "Animal Default Constructor Called" <<std::endl;
}
Animal::Animal(const Animal &a)
{
     std::cout << "Animal Copy Constructor Called" <<std::endl;
    this->type = a.type;
}
Animal & Animal::operator=(const Animal &other)
{
    std::cout << "Animal Copy Assigment Operator Called" <<std::endl;
    type = other.type;
    return(*this);
}
void Animal::makeSound()const
{
    std::cout<< "WrongAnimal sound"<< std::endl;
}
Animal::~Animal()
{
    std::cout <<"Animal Destructor Called" << std::endl;
}
std::string Animal::getType() const
{
    return(type);
}