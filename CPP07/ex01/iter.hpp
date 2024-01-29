/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:42:10 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/08 03:46:29 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void iter(const T *a,int size,void (*funct)(const T &))
{
     for (int i = 0; i < size; i++) {
        funct(a[i]);
    }
}
#endif