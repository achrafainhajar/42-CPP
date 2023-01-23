/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:45:24 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/23 09:45:25 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
class Weapon{
    std::string type;
    public:
    Weapon(void){}
    Weapon(std::string type)
    {
        this->type = type;
    }
    const std::string getType(void);
    void setType(std::string str);
};
#endif