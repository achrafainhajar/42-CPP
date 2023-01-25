/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 06:42:32 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/25 07:20:41 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
Fixed::Fixed()
{
    std::cout<<"Default constructor called"<< std::endl;
    value = 0;
}
Fixed::Fixed(const int value)
{
    std::cout<<"Int constructor called"<< std::endl;
    this->value = value << bits;
}
Fixed::Fixed(const float value)
{
    std::cout<<"Float constructor called"<< std::endl;
    this->value = roundf(value * (1 << bits));
}
Fixed::Fixed(const Fixed &ref)
{
    std::cout<<"Copy constructor called"<< std::endl;
    value = ref.getRawBits();
}
Fixed::~Fixed()
{
    std::cout<<"Destructor called"<< std::endl;
}
Fixed& Fixed::operator=(const Fixed &ref)
{
    std::cout<<"Copy assignment operator called"<< std::endl;
    value = ref.getRawBits();
    return *this;
}
int Fixed::getRawBits() const
{
    return(value);
}
void  Fixed::setRawBits(int const raw)
{
    this->value = raw;
}
