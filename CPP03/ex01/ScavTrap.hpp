/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:23:30 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/28 16:48:59 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap{
    public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap& operator=(ScavTrap const &ref);
    ScavTrap(ScavTrap const & ref);
    void guardGate();
    void attack(const std::string& target);
};

#endif