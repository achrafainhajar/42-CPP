/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:58:28 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/30 09:33:09 by aainhaja         ###   ########.fr       */
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
    Animal &operator=(const Animal &other);
    Animal(const Animal &a);
    virtual void makeSound()const;
    std::string getType() const;
    ~Animal();
};
#endif