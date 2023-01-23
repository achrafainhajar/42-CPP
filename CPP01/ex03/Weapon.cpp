/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:45:28 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/23 09:45:29 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string Weapon::getType(void)
{
    std::string &ref = type;
    return(ref);
}
void Weapon::setType(std::string str)
{
    this->type = str;
}