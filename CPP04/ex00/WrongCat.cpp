/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:11:10 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/30 09:35:30 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
}
void WrongCat::makeSound() const 
{
    std::cout<<"Wrong Cat Sound" << std::endl;
}
WrongCat::WrongCat(const WrongCat &a)
{
    this->type = a.type;
}
WrongCat & WrongCat::operator=(const WrongCat &other)
{
    type = other.type;
    return(*this);
}
WrongCat::~WrongCat()
{
    
}