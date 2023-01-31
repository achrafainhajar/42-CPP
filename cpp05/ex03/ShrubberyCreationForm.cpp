/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 09:20:11 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/28 17:48:08 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"
#include "beref.hpp"
ShrubberyCreationForm::ShrubberyCreationForm(std::string target):target(target),Form("ShrubberyCreationForm",145,137)
{
    
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
    if(get_signed() == false)
    {
        throw SignedException(get_Grade());
    }
    if(executor.get_Grade() > get_exec())
    {
        throw GradeTooLowException(get_Grade());
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

