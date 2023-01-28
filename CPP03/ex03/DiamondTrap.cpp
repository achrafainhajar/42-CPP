/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:42:09 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/28 11:36:23 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &ref)
{
    std::cout<<"DiamondTrap Copy assignment operator called"<< std::endl;
    name = ref.name;
    Hit_point = ref.Hit_point;
    Energy_point = ref.Energy_point;
    Attack_damage = ref.Attack_damage;
    return *this;
}
DiamondTrap::DiamondTrap(DiamondTrap const & ref)
{
    std::cout << "DiamondTrap Copy Constructor Called"<<std::endl;
    *this = ref;
}

DiamondTrap::DiamondTrap()
{
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
    std::cout<<"DiamondTrap Default Assigment Constructor Called"<< std::endl;
    Hit_point = 100;
    Energy_point = 50;
    Attack_damage = 30;
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor Called"<< std::endl;
}
void DiamondTrap::highFivesGuys(void)
{
    std::cout << "Let's give each other a high five!" << std::endl;
}
void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}