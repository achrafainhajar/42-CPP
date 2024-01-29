/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:21:26 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/13 01:07:15 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
Span spe = Span(7);
int myints[]={10,20,30,40,50,60,70};
std::vector<int> myvector(7);

std::copy ( myints, myints+7, myvector.begin());

spe.addNumbers(myvector);
std::cout << spe.shortestSpan() << std::endl;
std::cout << spe.longestSpan() << std::endl;
try
{
    sp.addNumber(1);   
}
catch(std::exception &e)
{
    std::cout << e.what()<<std::endl;
}
return 0;
}