/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:45:10 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/23 09:45:11 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
class Harl{
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    public:
    Harl()
    {
        tab[0] = &Harl::debug;
        tab[1] = &Harl::info; 
        tab[2] = &Harl::warning; 
        tab[3] = &Harl::error; 
    }
    void (Harl::*tab[4])();
    void complain( std::string level);
};
#endif