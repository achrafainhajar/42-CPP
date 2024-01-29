/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:44:14 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/08 03:41:23 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define  ARRAY_HPP

#include <iostream>

template <typename T>
class Array{
    T *element;
    unsigned int nb;
    public:
    Array()
    {
        element = NULL;
        nb = 0;
    }
    ~Array()
    {
        delete [] element;
    }
    Array(unsigned int n)
    {
        if(n <= 0)
            throw std::out_of_range("Index out of range");
        element = new T[n];
        nb = n;
        
    }
    Array (const Array &a)
    {
        nb = a.nb;
        element = new T[a.nb];
        unsigned int i = 0;
        while(i < nb)
        {
            element[i] = a.element[i];
            i++;
        }
    }
    Array &operator=(const Array &a)
    {
        if(element)
         delete [] element;
        if(a.element)
        {
            element = new T[a.nb];
            unsigned int i = 0;
            while(i < a.nb)
            {
                element[i] = a.element[i];
                i++;
            }
        }
        nb = a.nb;
        return(*this);
    }
    T &operator[](unsigned int index)
    {
        if(index >= nb)
            throw std::out_of_range("Index out of range");
        return(element[index]);
    }
    int size(void)
    {
        return(nb);
    }
};
#endif