/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:03:50 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/29 17:52:07 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog()
{
   brain = new Brain;
   type = "Dog";
}
void Dog::makeSound() const
{
    std::cout<<"Woof Woof" << std::endl;
}
Dog::~Dog()
{
    std::cout << "Dog destruction called" <<std::endl;
    delete brain;
}