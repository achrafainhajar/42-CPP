/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:31:09 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/28 11:31:20 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"
ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout<<"ScavTrap Default Assigment Constructor Called"<< std::endl;
    Hit_point = 100;
    Energy_point = 50;
    Attack_damage = 20;
}
ScavTrap& ScavTrap::operator=(ScavTrap const &ref)
{
    std::cout<<"ScavTrap Copy assignment operator called"<< std::endl;
    name = ref.name;
    Hit_point = ref.Hit_point;
    Energy_point = ref.Energy_point;
    Attack_damage = ref.Attack_damage;
    return *this;
}
ScavTrap::ScavTrap(ScavTrap const & ref)
{
    std::cout << "ScavTrap Copy Constructor Called"<<std::endl;
    *this = ref;
}
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor Called"<< std::endl;
}
void ScavTrap::guardGate()
{
   std::cout<<"ScavTrap in now in Gate keeper mode "<<std::endl;
}
void ScavTrap::attack(const std::string& target)
{
    if(!Hit_point || !Energy_point)
    {
        std::cout << "ScavTrap "<<name<<" is Dead"<< std::endl;
        return;
    }
    Energy_point--;
    std::cout << "ScavTrap " <<name << " attacks "<< target<< " causing "<< Attack_damage <<" points of damage!" << std::endl;
}