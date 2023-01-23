/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:57:30 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/24 00:02:57 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *p;
    p = new Zombie[N];
    int i = 0;
    while(i < N)
    {
        p[i].set_name(name);
        i++;
    }
    return(p);
}