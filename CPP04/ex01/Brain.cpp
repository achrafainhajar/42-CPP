/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:10:26 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/30 10:15:22 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor Called" <<std::endl;
}
Brain::Brain(const Brain &a)
{
    std::cout << "Brain Copy Constructor Called" <<std::endl;
    int i;
    i = 0;
    while(i < 100)
    {
        ideas[i] = a.ideas[i];
        i++;
    }
}
Brain & Brain::operator=(const Brain &a)
{
    std::cout << "Brain Copy Assigment Operator Called" <<std::endl;
    int i;
    i = 0;
    while(i < 100)
    {
        ideas[i] = a.ideas[i];
        i++;
    }
    return(*this);
}
std::string* Brain::getideas()
{
    return(ideas);
}
Brain::~Brain()
{
    std::cout << "Brain Destructor Called" <<std::endl;
}