/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 08:18:36 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/01 09:15:01 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout<< "Default Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(int grade,const std::string name):name(name)
{
        this->grade = grade;
        if(grade > 150)
            throw GradeTooLowException();
        if(grade < 1)
            throw GradeTooHighException();
}
Bureaucrat::Bureaucrat(const Bureaucrat &a):name(a.name)
{
    grade = a.grade;   
}
Bureaucrat  & Bureaucrat::operator=(const Bureaucrat &a)
{
    this->grade = a.grade;
    return(*this);
}
Bureaucrat::~Bureaucrat()
{
    
}
std::string Bureaucrat::get_Name() const
{
    return(this->name);
}
int Bureaucrat::get_Grade() const 
{
    return(this->grade);
}
void Bureaucrat::increment()
{
    this->grade--;
    if(grade < 1)
        throw GradeTooHighException();
}
void Bureaucrat::decrement()
{
    this->grade++;
    if(grade > 150)
        throw GradeTooLowException();
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Your Grade is too Low");
}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Your Grade is too High");
}
Bureaucrat::GradeTooLowException::GradeTooLowException()
{
    
}
Bureaucrat::GradeTooHighException::GradeTooHighException()
{
    
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& a) {
        out << a.get_Name() << ", bureaucrat grade " << a.get_Grade() << std::endl;
        return out;
    }