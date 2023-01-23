/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:45:40 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/23 09:45:41 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"


    void HumanB::setWeapon(Weapon &weapon)
    {
        this->weapon= &weapon;
    }
    void HumanB::attack()
    {
        if(weapon)
            std::cout<<name<< " attacks with their "<< weapon->getType()<<std::endl;
        else
            std::cout<<name<< " attacks with their "<< "rjlo" <<std::endl;
    }