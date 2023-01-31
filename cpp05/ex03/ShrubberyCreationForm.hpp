/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 09:20:14 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/28 17:47:35 by aainhaja         ###   ########.fr       */
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
    ShrubberyCreationForm(std::string target);
      class SignedException {
    int grade;
    public:
        SignedException(){}
        SignedException(int grd) : grade(grd){}
        const char *what() const throw()
        {
            std::string message = "The Form is not signed because " + std::to_string(grade) + " is too Low";
            return (message.c_str());
        }
    };
    void execute(Bureaucrat const & executor);
};
#endif