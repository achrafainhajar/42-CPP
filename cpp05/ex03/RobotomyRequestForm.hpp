/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 09:20:37 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/28 17:44:31 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include"Form.hpp"
#include"beref.hpp"
class RobotomyRequestForm : public Form{
    std::string target;
    public:
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