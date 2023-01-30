/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:02:42 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/30 09:28:26 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include"Animal.hpp"

#include<iostream>
class Dog : public Animal{
    public:
    Dog();
    Dog(const Dog &a);
    Dog &operator=(const Dog &other);
    void makeSound() const;
    ~Dog();
};
#endif