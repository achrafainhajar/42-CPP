/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 09:57:21 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/28 09:58:13 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    Form("PresidentialPardonForm",25,5);
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &a)
{
    Form(a.get_Name(),a.get_Grade(),a.get_exec());
    target = a.target;
}
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &a)
{
    Form(a.get_Name(),a.get_Grade(),a.get_exec());
    target = a.target;
    return (*this);
}
PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("PresidentialPardonForm",25,5)
{
    this->target = target;
}
void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
    if(get_signed() == false)
    {
        throw SignedException(get_Grade());
    }
    if(executor.get_Grade() > get_exec())
    {
        throw GradeTooLowException();
    }
    std::cout <<target<<" has been pardoned by Zaphod Beeblebrox"<< std::endl;
}