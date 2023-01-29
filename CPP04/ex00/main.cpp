/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:03:23 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/29 17:19:01 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include"WrongAnimal.hpp"
int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const WrongAnimal* i = new WrongCat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
return 0;
}