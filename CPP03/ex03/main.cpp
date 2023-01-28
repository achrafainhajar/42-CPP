/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:45:12 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/28 10:45:13 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"FragTrap.hpp"
#include"ScavTrap.hpp"
#include"DiamondTrap.hpp"
int main(void)
{
    DiamondTrap d;
	DiamondTrap a( "XD" );
	DiamondTrap b( "Alfonso" );
	d.attack("Me");
}