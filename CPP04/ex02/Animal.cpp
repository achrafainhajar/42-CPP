/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:39:06 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/29 17:47:03 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

Animal::Animal()
{
    
}
void Animal::makeSound()const
{}
Animal::~Animal()
{
    
}
std::string Animal::getType() const
{
    return(type);
}