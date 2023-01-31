/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:51:11 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/31 10:33:24 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include<iostream>

class Brain{
    std::string ideas[100];
    public:
    Brain();
    Brain(const Brain &a);
    std::string* getideas();
    ~Brain();
    Brain & operator=(const Brain &a);
    void set_value(const std::string &a);
};
#endif