/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:32:16 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/28 16:49:23 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include"ClapTrap.hpp"

class FragTrap : public ClapTrap{
    public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap& operator=(FragTrap const &ref);
    FragTrap(FragTrap const & ref);
    void highFivesGuys(void);
    void attack(const std::string& target);
};
#endif