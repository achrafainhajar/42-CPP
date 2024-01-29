/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 09:20:11 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/03 16:48:22 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("ShrubberyCreationForm",145,137)
{
    target = "";
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &a):Form(a.get_Name(),a.get_Grade(),a.get_exec())
{
    target = a.target;
}
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &a)
{
    target = a.target;
    return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("ShrubberyCreationForm",145,137)
{
    this->target = target;
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
    if(get_signed() == false)
    {
        throw GradeTooLowException();
    }
    if(executor.get_Grade() > get_exec())
    {
        throw GradeTooLowException();
    }
    std::ofstream file;
    file.open(target + "_shrubbery");
    if(file.is_open())
    {
        file << "    *\n"
             << "   ***\n"
             << "  *****\n"
             << " *******\n"
             << "*********\n"
             << "    ||    \n"
             << "    ||     \n"
             << "    ||        ";
        file.close();
    }
    else
        std::cout<<"can't open file error"<<std::endl;
}

