/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:54:26 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/30 10:42:30 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include"Dog.hpp"
#include"Animal.hpp"
#include"Brain.hpp"
int main()
{
    Animal *lol[10];
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
        delete lol[i];
        i++;
    }
}