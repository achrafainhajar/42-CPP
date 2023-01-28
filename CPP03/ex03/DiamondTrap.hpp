/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:40:41 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/28 11:43:00 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include"ScavTrap.hpp"
#include"FragTrap.hpp"
#include"ClapTrap.hpp"
class DiamondTrap :  public ScavTrap, public FragTrap{
    private:
    std::string name;
    public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap& operator=(DiamondTrap const &ref);
    DiamondTrap(DiamondTrap const & ref);
    ~DiamondTrap();
    void highFivesGuys(void);
    void attack(const std::string& target);
};
#endif