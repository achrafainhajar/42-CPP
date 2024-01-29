/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:24:47 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/07 01:46:41 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include<iostream>

template<typename T>
void swap(T &s1,T &s2)
{
    T temp;
    temp = s1;
    s1 = s2;
    s2 = temp;
}
template<typename T>
T min(T a,T b)
{
    if(a < b)
    {
        return(a);
    }
    return(b);
}
template<typename T>
T max(T a,T b)
{
    if(a > b)
    {
        return(a);
    }
    return(b);
}

#endif