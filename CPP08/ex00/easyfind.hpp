/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 01:01:22 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/13 01:02:04 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include<iostream>
#include <vector>
#include <algorithm>

template<typename T>

void easyfind(T a,int k)
{
    if(std::find(a.begin(), a.end(), k) == a.end())
    {
        throw std::runtime_error("Value not found");
    }
    std::cout <<"l9ah"<< std::endl;
}

#endif