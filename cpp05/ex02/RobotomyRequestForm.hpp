/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 09:20:37 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/03 10:58:33 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include"Form.hpp"
#include"Bureaucrat.hpp"
class RobotomyRequestForm : public Form{
    std::string target;
    public:
    RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &a);
    RobotomyRequestForm  & operator=(const RobotomyRequestForm &a);
    ~RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    void execute(Bureaucrat const & executor);
};
#endif