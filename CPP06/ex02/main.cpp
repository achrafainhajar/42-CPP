/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:40:33 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/06 01:33:00 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Base.hpp"
#include "A.hpp"
#include"B.hpp"
#include "C.hpp"

int main()
{
    Base *a;
    a = generate();
    identify(a);
    identify(*a);
    delete a;
}