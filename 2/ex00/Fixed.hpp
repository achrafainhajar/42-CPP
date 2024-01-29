/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 06:37:01 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/25 06:38:29 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    int value;
    static const int bits = 8;
    public:
    Fixed();
    Fixed(Fixed &ref);
    ~Fixed();
    Fixed& operator=(Fixed &ref);
    int getRawBits() const;
    void  setRawBits(int const raw);
};

#endif