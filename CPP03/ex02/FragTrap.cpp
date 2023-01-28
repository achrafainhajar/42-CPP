/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:33:29 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/28 11:28:59 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout<<"FragTrap Default Assigment Constructor Called"<< std::endl;
    Hit_point = 100;
    Energy_point = 100;
    Attack_damage = 30;
}
FragTrap& FragTrap::operator=(FragTrap const &ref)
{
    std::cout<<"FragTrap Copy assignment operator called"<< std::endl;
    name = ref.name;
    Hit_point = ref.Hit_point;
    Energy_point = ref.Energy_point;
    Attack_damage = ref.Attack_damage;
    return *this;
}
FragTrap::FragTrap(FragTrap const & ref)
{
    std::cout << "FragTrap Copy Constructor Called"<<std::endl;
    *this = ref;
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor Called"<< std::endl;
}
void FragTrap::highFivesGuys(void)
{
    std::cout << "Let's give each other a high five!" << std::endl;
}
void FragTrap::attack(const std::string& target)
{
    if(!Hit_point || !Energy_point)
    {
        std::cout << "FragTrap "<<name<<" is Dead"<< std::endl;
        return;
    }
    Energy_point--;
    std::cout << "FragTrap " <<name << " attacks "<< target<< " causing "<< Attack_damage <<" points of damage!" << std::endl;
}