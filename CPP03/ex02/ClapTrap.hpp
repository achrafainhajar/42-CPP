/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 07:07:00 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/29 07:07:01 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<iostream>

class ClapTrap{

    protected:
        std::string name;
        int Hit_point;
        int Energy_point;
        int Attack_damage;
    public:
    std::string getter();
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap& operator=(ClapTrap const &ref);
    ClapTrap(ClapTrap const & ref);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap();
};
#endif