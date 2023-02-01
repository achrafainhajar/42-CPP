/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 09:20:37 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/01 09:51:18 by aainhaja         ###   ########.fr       */
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
};
#endif