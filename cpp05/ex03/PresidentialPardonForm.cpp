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

PresidentialPardonForm::PresidentialPardonForm(std::string target):target(target),Form("PresidentialPardonForm",25,5)
{

}
void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
    if(get_signed() == false)
    {
        throw SignedException(get_Grade());
    }
    if(executor.get_Grade() > get_exec())
    {
        throw GradeTooLowException(executor.get_Grade());
    }
    std::cout <<target<<" has been pardoned by Zaphod Beeblebrox"<< std::endl;
}