/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 06:47:44 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/26 01:47:20 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include<cmath>
class Fixed{
    int value;
    static const int bits = 8;
    public:
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    Fixed(const Fixed &ref);
    ~Fixed();
    Fixed& operator=(const Fixed &ref);
    Fixed operator+(const Fixed &ref) const;
    Fixed operator-(const Fixed &ref) const;
    Fixed operator*(const Fixed &ref) const;
    Fixed operator/(const Fixed &ref) const;
    bool operator>(const Fixed &ref);
    bool operator<(const Fixed &ref);
    bool operator>=(const Fixed &ref);
    bool operator<=(const Fixed &ref);
    bool operator!=(const Fixed &ref);
    bool operator==(const Fixed &ref);
    int getRawBits() const;
    void  setRawBits(int const raw);
    float toFloat( void ) const;
    Fixed operator++();
    Fixed operator++(int);
    Fixed operator--();
    Fixed operator--(int);
    static Fixed & min(Fixed &a,Fixed &b);
    static const Fixed & min(const Fixed &a,const Fixed &b);
    static Fixed & max(Fixed &a,Fixed &b);
     static const Fixed & max(const Fixed &a,const Fixed &b);
    int toInt( void ) const;
};
std::ostream& operator<<(std::ostream& os, const Fixed& obj);
#endif