/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 06:49:51 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/26 01:47:23 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
}
Fixed::Fixed(const int value)
{
    this->value = value << bits;
}
Fixed::Fixed(const float value)
{
    this->value = roundf(value * (1 << bits));
}
Fixed::Fixed(const Fixed &ref)
{
    value = ref.getRawBits();
}
Fixed::~Fixed()
{
}
Fixed& Fixed::operator=(const Fixed &ref)
{
    value = ref.getRawBits();
    return *this;
}
Fixed Fixed::operator+(const Fixed &ref) const
{
    return (Fixed(value + ref.getRawBits()));
}
 Fixed Fixed::operator-(const Fixed &ref) const
{
    return (Fixed(value - ref.getRawBits()));
}
 Fixed Fixed::operator*(const Fixed &ref) const
{
    return (Fixed(toFloat() * ref.toFloat()));
}
 Fixed Fixed::operator/(const Fixed &ref) const
{
    
    return (Fixed(toFloat() / ref.toFloat()));
}
bool Fixed::operator>(const Fixed &ref) 
{
    return(value > ref.getRawBits());
}
bool Fixed::operator<(const Fixed &ref)
{
    return(value < ref.getRawBits());
}
bool Fixed::operator>=(const Fixed &ref)
{
    return(value >= ref.getRawBits());
}
bool Fixed::operator<=(const Fixed &ref)
{
    return(value <= ref.getRawBits());
}
bool Fixed::operator!=(const Fixed &ref)
{
    return(value != ref.getRawBits());
}
bool Fixed::operator==(const Fixed &ref)
{
    return(value == ref.getRawBits());
}
int Fixed::getRawBits() const
{
    return(value);
}
void  Fixed::setRawBits(int const raw)
{
    this->value = raw;
}
float Fixed::toFloat( void ) const
{
    return((float)value / (float)(1  << bits));
}
int Fixed::toInt( void ) const
{
    return(value >> bits);
}
Fixed Fixed::operator++()
{
        ++value;
        return *this;
}
Fixed Fixed::operator++(int)
{
    Fixed temp;
    temp.setRawBits(value);
    ++value;
    return (temp);
}
Fixed Fixed::operator--()
{
        ++value;
        return *this;
}
Fixed Fixed::operator--(int)
{
        Fixed temp;
        temp.setRawBits(value);
        --value;
        return (temp);
}
 Fixed & Fixed::min(Fixed &a,Fixed &b)
{
    if(a.getRawBits() > b.getRawBits())
        return(b);
    return(a);
}
const Fixed & Fixed::min(const Fixed &a,const Fixed &b)
{
    if(a.getRawBits() > b.getRawBits())
        return(b);
    return(a);
}
 Fixed & Fixed::max(Fixed &a,Fixed &b)
{
    if(a.getRawBits() < b.getRawBits())
        return(b);
    return(a);
}
const Fixed & Fixed::max(const Fixed &a,const Fixed &b)
{
    if(a.getRawBits() < b.getRawBits())
        return(b);
    return(a);
}
std::ostream& operator<<(std::ostream& os, const Fixed& obj) 
{
        os << obj.toFloat();
        return os;
}