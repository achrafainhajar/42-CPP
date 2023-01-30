/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:58:28 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/30 10:44:11 by aainhaja         ###   ########.fr       */
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
    virtual void makeSound()const = 0;
    std::string getType() const;
    virtual ~Animal();
    Animal &operator=(const Animal &other);
    Animal(const Animal &a);
};
#endif