#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include<iostream>

#include "Form.hpp"
class Bureaucrat{
    const std::string name;
    int grade;
    public:
    Bureaucrat();
    Bureaucrat(int grade,const std::string name);
    Bureaucrat(const Bureaucrat &a);
    Bureaucrat  & operator=(const Bureaucrat &a);
    ~Bureaucrat();
    std::string get_Name() const;
    int get_Grade() const;
    void increment();
    void decrement();
    class GradeTooHighException:public std::exception{
    public:
    GradeTooHighException();
           const char* what() const throw();
    };
    class GradeTooLowException:public std::exception{
    public:
        GradeTooLowException();
        const char* what() const throw();
    };
    void signForm(const Form &a);
    void executeForm(Form  & form);
};
std::ostream& operator<<(std::ostream& out, const Bureaucrat& a);
#endif
