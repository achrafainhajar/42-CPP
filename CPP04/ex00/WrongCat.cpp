/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:11:10 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/31 10:12:35 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default Constructor Called" <<std::endl;
    type = "WrongCat";
}
void WrongCat::makeSound() const 
{
    std::cout<<"WrongCat Sound" << std::endl;
}
WrongCat::WrongCat(const WrongCat &a)
{
    std::cout << "WrongCat Copy Constructor Called" <<std::endl;
    this->type = a.type;
}
WrongCat & WrongCat::operator=(const WrongCat &other)
{
    std::cout << "WrongCat Copy Assigment Operator Called" <<std::endl;
    type = other.type;
    return(*this);
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" <<std::endl;
}