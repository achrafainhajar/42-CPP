/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:45:10 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/24 00:18:57 by aainhaja         ###   ########.fr       */
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
    Harl();
    void complain( std::string level);
    ~Harl();
};
#endif