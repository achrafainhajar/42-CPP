/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 06:42:44 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/25 06:45:07 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
#include <iostream>

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
    int getRawBits() const;
    void  setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
};
#endif