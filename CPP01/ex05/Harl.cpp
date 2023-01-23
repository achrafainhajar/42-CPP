/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:45:06 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/24 00:18:31 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"
Harl::Harl()
{
    std::cout << "Default Constructor Called" << std::endl;
}
Harl::~Harl()
{
    std::cout << "Destructor Called" << std::endl;
}
void Harl::debug(void)
{
    std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<< std::endl;
}
void Harl::info(void)
{
    std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< std::endl;
}
void Harl::warning(void)
{
    std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<< std::endl;
}
void Harl::error(void)
{
    std::cout<<"This is unacceptable! I want to speak to the manager now."<< std::endl;
}
void Harl::complain( std::string level)
{
    void (Harl::*tab[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i = 0;
    std::string str[4] = {"DEBUG","INFO","WARNING","ERROR"};
    while(i < 4)
    {
        if(str[i] == level)
        {
            (this->*tab[i])();
            break;
        }
        i++;
    }
}