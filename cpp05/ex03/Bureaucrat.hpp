#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include<iostream>

#include "Form.hpp"
class Bureaucrat{
    const std::string name;
    int grade;
    public:
    Bureaucrat();
    Bureaucrat(std::string name,int grade);
    Bureaucrat(const Bureaucrat &a);
    Bureaucrat  & operator=(const Bureaucrat &a);
    ~Bureaucrat();
    std::string get_Name() const;
    int get_Grade() const ;
    void increment();
    void decrement();
    void signForm(Form a);
    void executeForm(Form const & form);
};
std::ostream& operator<<(std::ostream& out, const Bureaucrat& a);
#endif
