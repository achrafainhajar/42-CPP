/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:25:30 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/08 03:47:13 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"iter.hpp"
template<typename T>
void funct(T const &arr)
{
    std::cout <<arr<< std::endl;
}

int main()
{
    std::string s[3] = {"ana","huwa","homa"};
    iter(s,3,funct);
    return 0;
}