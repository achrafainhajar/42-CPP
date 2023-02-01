/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 07:53:01 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/01 09:18:44 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
Bureaucrat::Bureaucrat(){
    std::cout<< "Default Constructor Called" << std::endl;
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
Bureaucrat::Bureaucrat(std::string name,int grade): name(name){
    this->grade = grade;
    if(grade > 150)
        throw Form::GradeTooLowException();
    if(grade < 1)
        throw Form::GradeTooHighException();
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
        throw Form::GradeTooHighException();
}
void Bureaucrat::decrement()
{
    this->grade++;
    if(grade > 150)
        throw Form::GradeTooLowException();
}
void Bureaucrat::signForm(Form a)
{
    if(a.get_signed() == true)
        std::cout<<name<<" signed " << a.get_Name()<<std::endl;
    else
        std::cout<<name<<" couldn’t sign " << a.get_Name()<<" because "<< grade << " is Lower than "<< a.get_exec()<<std::endl;
}
void Bureaucrat::executeForm(Form const & form)
{
    if(form.get_signed() == true)
        std::cout<<name<< " executed " << form.get_Name()<< std::endl;
    else
        std::cout<<name<< " does not execute " << form.get_Name()<< std::endl;
}
std::ostream& operator<<(std::ostream& out, const Bureaucrat& a) {
        out << a.get_Name() << ", bureaucrat grade " << a.get_Grade() << std::endl;
        return out;
    }