/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:02:42 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/29 17:51:51 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include"Animal.hpp"

#include<iostream>
#include"Brain.hpp"

class Dog : public Animal{
    Brain *brain;
    public:
    Dog();
    void makeSound() const;
    ~Dog();
};
#endif