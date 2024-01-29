/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 00:42:46 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/13 00:58:02 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"

Span::Span(){}
Span::Span(unsigned int N)
{
    this->N = N;
}
int Span::shortestSpan()
{
     std::sort(arr.begin(), arr.end());
     int temp = arr[1] - arr[0];
     for(unsigned long i = 1; i < arr.size() - 1;i++)
    {
        if(arr[i + 1] - arr[i] < temp)
            temp = arr[i + 1] - arr[i];
    }
    return(temp);
}
int Span::longestSpan()
{
    std::sort(arr.begin(), arr.end());
    return(arr.back() - arr.front());
}
void Span::addNumber(int n)
{   
    if(N == 0)
        throw std::out_of_range("out of range");
    N--;
    arr.push_back(n);
}
