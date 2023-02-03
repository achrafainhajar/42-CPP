/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 09:20:46 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/28 09:57:20 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"
#include"Bureaucrat.hpp"

class PresidentialPardonForm : public Form{
    std::string target;
    public:
    PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &a);
    PresidentialPardonForm  & operator=(const PresidentialPardonForm &a);
    ~PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    void execute(Bureaucrat const & executor);
};
#endif