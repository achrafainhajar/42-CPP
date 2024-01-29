/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:08:15 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/13 01:14:34 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
int main()
{
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(30);
    vec.push_back(11);
    vec.push_back(12);
    try{
       easyfind(vec,30);
       easyfind(vec,31);
    }
    catch(std::exception &e)
        {
        std::cout <<"mal9ahch"<< std::endl;
    }
    return(0);
}