/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:47:57 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/03 12:55:42 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base{
    public:
    virtual ~Base();
};
Base * generate(void);
void identify(Base* p);
void identify(Base& p);
#endif