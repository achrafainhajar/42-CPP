/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:36:10 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/28 11:01:44 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap(void){}
ClapTrap::ClapTrap(std::string name)
{
    std::cout<<"ClapTrap Default Assigment Constructor Called"<< std::endl;
    this->name = name;
    Hit_point = 10;
    Energy_point = 10;
    Attack_damage = 0;
}
ClapTrap& ClapTrap::operator=(ClapTrap const &ref)
{
    std::cout<<"Copy assignment operator called"<< std::endl;
    name = ref.name;
    Hit_point = ref.Hit_point;
    Energy_point = ref.Energy_point;
    Attack_damage = ref.Attack_damage;
    return *this;
}
ClapTrap::ClapTrap(ClapTrap const & ref)
{
    std::cout << "Copy Constructor Called"<<std::endl;
    *this = ref;
}
void ClapTrap::attack(const std::string& target)
{
    if(!Hit_point || !Energy_point)
    {
        std::cout << "ClapTrap "<<name<<" is Dead"<< std::endl;
        return;
    }
    Energy_point--;
    std::cout << "ClapTrap " <<name << " attacks "<< target<< " causing "<< Attack_damage <<" points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if(!Hit_point || !Energy_point)
    {
        std::cout << "ClapTrap "<<name<<" is Dead"<< std::endl;
        return;
    }
    std::cout << "ClapTrap " <<name << " took "<< amount <<" damage!" << std::endl;
    Hit_point = Hit_point - amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(!Hit_point || !Energy_point)
    {
        std::cout << "ClapTrap "<<name<<" is Dead"<< std::endl;
        return;
    }
    Hit_point = amount;
    std::cout << "ClapTrap " <<name << "reparing him self" << std::endl;
    Energy_point--;
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor Called"<< std::endl;
}