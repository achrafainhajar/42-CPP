/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:17:00 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/06 01:35:47 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Data.hpp"

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}
Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

int main()
{
    Data ptr;
    ptr.data = 4;
    Data *haha = deserialize(serialize(&ptr));
    std::cout<<haha->data<<std::endl;
}