/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:08:07 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/30 09:39:26 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat()
{
    type = "Cat";
}
void Cat::makeSound() const 
{
    std::cout<<"meow meow" << std::endl;
}

Cat::~Cat()
{
  
}