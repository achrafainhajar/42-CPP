/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 06:37:47 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/26 02:17:30 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed()
{
    std::cout<<"Default constructor called"<< std::endl;
    value = 0;
}
Fixed::Fixed(Fixed &ref)
{
    std::cout<<"Copy constructor called"<< std::endl;
    value = ref.getRawBits();
}
Fixed::~Fixed()
{
    std::cout<<"Destructor called"<< std::endl;
}
Fixed& Fixed::operator=(Fixed &ref)
{
    std::cout<<"Copy assignment operator called"<< std::endl;
    value = ref.getRawBits();
    return *this;
}
int Fixed::getRawBits() const
{
    std::cout<<"getRawBits member function called"<< std::endl;
    return(value);
}
void  Fixed::setRawBits(int const raw)
{
    std::cout<<"setRawBits member function called"<< std::endl;
    this->value = raw;
}
