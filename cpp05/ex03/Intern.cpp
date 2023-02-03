/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:48:30 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/03 10:44:40 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(Intern const & src)
{
    *this = src;
}

Intern  & Intern::operator=(Intern const & src)
{
    (void)src;
    return *this;
}
Form * Intern::makeform(std::string s1,std::string s2)
{
    Form *tab[3] = {new PresidentialPardonForm(s2),new ShrubberyCreationForm(s2),new RobotomyRequestForm(s2)};
std::string name[3] = { "presidential pardon","shrubbery creation","robotomy request"};
    int i = 0;
    while(i < 3)
    {
        if(s1 == name[i])
            break;
        i++;
    }
    switch(i)
    {
        case 1:
            std::cout << "Intern creates " << s1 << std::endl;
            return (tab[0]);
        case 2:
            std::cout << "Intern creates " << s1 << std::endl;
            return (tab[1]);
        case 3:
            std::cout << "Intern creates " << s1<< std::endl;
            return (tab[2]);
        default:
            std::cout << "Intern " << s1<< "does not exist"<<std::endl;
            return NULL;
    }   
}