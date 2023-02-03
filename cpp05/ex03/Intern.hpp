/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:47:43 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/03 16:29:53 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP 
#define INTERN_HPP

#include"Form.hpp"
#include"Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include"ShrubberyCreationForm.hpp"
class Intern
{
    public:
    Intern();
    ~Intern();
    Intern(Intern const & src);
    Intern  & operator=(Intern const & src);
    Form *makeForm(std::string s1,std::string s2);
};
#endif