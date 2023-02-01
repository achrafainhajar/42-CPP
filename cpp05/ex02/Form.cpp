/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 07:54:56 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/01 09:52:51 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"
#include"Bureaucrat.hpp"
Form::Form():name(""),grade(0),grade_exec(0)
{
    is_signed = false;
}
Form::Form(const Form &a):name(a.name),grade(a.grade),grade_exec(a.grade_exec)
{
     is_signed = a.is_signed;
}
Form & Form::operator=(const Form &a)
{
    is_signed = a.is_signed;
    return (*this);
}
Form::~Form()
{
    
}
Form::Form(std::string name,int grade,int grade_exec):name(name),grade(grade),grade_exec(grade_exec)
{
    if(grade > 150)
        throw GradeTooLowException();
    if(grade < 1)
        throw GradeTooHighException();
}
std::string Form::get_Name() const
{
    return(this->name);
}
void Form::beSigned(Bureaucrat a)
{
    if(a.get_Grade() > grade_exec)
        throw GradeTooLowException();
        is_signed = true;
}
int Form::get_exec() const
{
    return(grade_exec);
}
bool Form::get_signed() const
{
    return(is_signed);
}
int Form::get_Grade() const 
{
    return(this->grade);
}
Form::GradeTooLowException::GradeTooLowException()
{
    
}
const char* Form::GradeTooLowException::what() const throw()
{
        return ("Your Grade is too Low");
}
Form::GradeTooHighException::GradeTooHighException()
{
    
}
const char* Form::GradeTooHighException::what() const throw()
{
        return ("Your Grade is too High");
}
std::ostream& operator<<(std::ostream& out, const Form& a) {
        out << a.get_Name() << " , " << a.get_Grade() << " , " << a.get_signed() << std::endl;
        return out;
    }