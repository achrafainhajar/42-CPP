/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:22:07 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/23 23:54:56 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"
int main()
{  
    Zombie *p;
    int k = 3;
    p = zombieHorde(k,"achraf");
    int i = 0;
    while(i < k)
    {
        p[i].announce();
        i++;
    }
    delete [] p;
}