#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
class Bureaucrat;
class Form{
    const std::string name;
    bool  is_signed;
    const int grade;
    const int grade_exec;

    public :
    Form();
    Form(std::string name,int grade,int grade_exec);
    std::string get_Name() const;
    void beSigned(Bureaucrat a);
    const int get_exec() const;
    bool get_signed() const;
    int get_Grade() const ;
    class GradeTooHighException:public std::exception{
        int grade;
    public:
    GradeTooHighException(){}
        GradeTooHighException(int grd) : grade(grd){}
           const char* what() const throw();
    };
    class GradeTooLowException:public std::exception{
        int grade;
    public:
        GradeTooLowException(){}
        GradeTooLowException(int grd) : grade(grd){}
        const char* what() const throw();
    };
};
std::ostream& operator<<(std::ostream& out, const Form& a);
#endif