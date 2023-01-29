/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:13:02 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/29 17:31:47 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    
}
void WrongAnimal::makeSound()const
{
    std::cout << "Wrong Animal sound" << std::endl;
}
std::string WrongAnimal::getType() const
{
    return(type);
}