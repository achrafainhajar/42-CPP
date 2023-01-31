/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:54:26 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/31 12:25:29 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include"Dog.hpp"
#include"Animal.hpp"
#include"Brain.hpp"
int mainf()
{

    Animal *lol[4];
    int i= 0;
    while(i < 2)
    {
        lol[i] = new Dog;
        i++;
    }
    while(i < 4)
    {
        lol[i] = new Cat;
        i++;
    }
    i = 0;
    while(i < 4)
    {
        lol[i]->makeSound();
        i++;
    }
    i = 0;
    
    while(i < 4)
    {
        delete lol[i];
        i++;
    }
    return 0;
}
int main(){
    mainf();
    std::cout << std::endl;
    Animal *p = new Dog;
    
    Dog d2;
    d2 = *(Dog *)p;
    d2.get_brain()->set_value("coco");
    delete p;
    std::cout << (d2.get_brain())->getideas()[1];
    // system("leaks main");
}