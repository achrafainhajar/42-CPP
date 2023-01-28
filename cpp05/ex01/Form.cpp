/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 07:54:56 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/28 17:21:38 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"
#include"beref.hpp"
Form::Form():grade(0),grade_exec(0),name(""){}
Form::Form(std::string name,int grade,int grade_exec):name(name),grade(grade),grade_exec(grade_exec)
{
    if(grade > 150)
        throw GradeTooLowException(grade);
    if(grade < 1)
        throw GradeTooHighException(grade);
}
std::string Form::get_Name() const
{
    return(this->name);
}
void Form::beSigned(Bureaucrat a)
{
    try{
        if(a.get_Grade() > grade_exec)
            throw GradeTooLowException(a.get_Grade());
        else
            is_signed = true;
    }
    catch(GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
}
const int Form::get_exec() const
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
std::ostream& operator<<(std::ostream& out, const Form& a) {
        out << a.get_Name() << " , " << a.get_Grade() << " , " << a.get_signed() << std::endl;
        return out;
    }
    
const char* Form::GradeTooLowException::what() const throw(){
        return ("Your Grade is too Low");
    }
const char* Form::GradeTooHighException::what() const throw(){
        return ("Your Grade is too High");
    }