/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 09:20:14 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/03 10:58:56 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"
class ShrubberyCreationForm:public Form
{
    std::string target;
    public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &a);
    ShrubberyCreationForm  & operator=(const ShrubberyCreationForm &a);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    void execute(Bureaucrat const & executor);
};
#endif