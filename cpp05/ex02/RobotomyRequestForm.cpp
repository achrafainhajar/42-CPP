/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 09:55:36 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/28 18:01:39 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
RobotomyRequestForm::RobotomyRequestForm(std::string target):target(target),Form("RobotomyRequestForm",72,45)
{}
void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
    if(get_signed() == false)
    {
        throw SignedException(get_Grade());
    }
    if(executor.get_Grade() > get_exec())
    {
        throw GradeTooLowException(get_Grade());
    }
    srand(time(0)); // set the seed 
    int i = rand() % 10 + 1;
    if(i % 2)
        std::cout <<target<<" has been robotomized successfully 50% of the time"<< std::endl;
}