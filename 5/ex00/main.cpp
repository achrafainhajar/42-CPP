/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 08:34:28 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/03 14:54:31 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat a(1,"af3a");
        Bureaucrat b(150,"zab3a");
        std::cout <<b;
        b.increment();
        std::cout <<b;
        b.decrement();
        std::cout <<b;
        std::cout << a;
        a.increment();
    }
    catch(std::exception &e)
    {
        std::cout<<e.what()<<std::endl;
    }
}