/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:34:46 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/28 10:34:47 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"FragTrap.hpp"
#include"ScavTrap.hpp"
int main(void)
{
    FragTrap frag("ch3ayba");
    frag.attack("achraf");
    frag.takeDamage(10);
    frag.takeDamage(80);
    frag.beRepaired(100);
    frag.takeDamage(100);
    frag.attack("achraf");
    frag.highFivesGuys();
    return (0);
}