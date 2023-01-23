/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:45:51 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/23 09:45:52 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr;
    ptr = &str;
    std::string &ref = str;
    std::cout << &str<< std::endl;
    std::cout << ptr<< std::endl;
    std::cout << &ref<< std::endl;
    std::cout << str<< std::endl;
    std::cout << *ptr<< std::endl;
    std::cout << ref<< std::endl;
}