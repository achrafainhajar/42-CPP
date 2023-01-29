/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:08:07 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/29 17:54:23 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat()
{
    brain = new Brain;
    type = "Cat";
}
void Cat::makeSound() const 
{
    std::cout<<"meow meow" << std::endl;
}
Cat::~Cat()
{
    std::cout << "Cat destruction called" <<std::endl;
    delete brain;
}