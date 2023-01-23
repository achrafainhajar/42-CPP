/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:45:36 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/23 09:45:37 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
class HumanB{
    std::string name;
    Weapon *weapon;
    public:
    HumanB(std::string str)
    {
        name = str;
    }
    void setWeapon(Weapon &weapon);
    void attack();
};
#endif