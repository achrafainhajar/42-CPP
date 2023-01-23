/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:45:24 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/24 00:13:58 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
class Weapon{
    std::string type;
    public:
    Weapon();
    Weapon(std::string type);
    const std::string getType(void);
    void setType(std::string str); 
    ~Weapon();
};
#endif