/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:58:28 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/29 17:57:36 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>

class Animal{
    protected:
    std::string type;
    public:
    Animal();
    virtual std::string getType() const = 0;
    virtual void makeSound()const = 0;
    virtual ~Animal();
};
#endif