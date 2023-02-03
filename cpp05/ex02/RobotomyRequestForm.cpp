/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 09:55:36 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/03 16:48:18 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestForm",72,45)
{
    target = "";
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &a):Form(a.get_Name(),a.get_Grade(),a.get_exec())
{
    target = a.target;
}
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &a)
{
    target = a.target;
    return (*this);
}
RobotomyRequestForm::~RobotomyRequestForm()
{
    
}
RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("RobotomyRequestForm",72,45)
{
    this->target = target;
}
void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
    if(get_signed() == false)
    {
        throw GradeTooLowException();
    }
    if(executor.get_Grade() > get_exec())
    {
        throw GradeTooLowException();
    }
    srand(time(0)); // set the seed 
    int i = rand() % 10;
    if(i % 2)
        std::cout <<target<<" has been robotomized successfully"<< std::endl;
        else
        std::cout <<target<<" has been robotomized Failed"<< std::endl;
}