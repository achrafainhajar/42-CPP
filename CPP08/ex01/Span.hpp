/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 00:42:55 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/13 01:00:21 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    std::vector<int> arr;
    unsigned int N;
    public:
    Span();
    Span(unsigned int N);
    int shortestSpan();
    int longestSpan();
    void addNumber(int n);
    template<typename T>
    void addNumbers(T a)
    {
        arr.insert(arr.end(), a.begin(), a.end());
    }
};
#endif