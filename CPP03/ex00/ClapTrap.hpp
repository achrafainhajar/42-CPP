/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:16:57 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/28 11:24:00 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<iostream>

class ClapTrap{
    private:
    std::string name;
    int Hit_point;
    int Energy_point;
    int Attack_damage;

    public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const & src);
    ClapTrap & operator=(ClapTrap const & ref);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap();
};
#endif