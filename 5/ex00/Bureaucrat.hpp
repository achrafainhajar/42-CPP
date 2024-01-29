/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 08:18:53 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/03 11:06:50 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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
};
std::ostream& operator<<(std::ostream& out, const Bureaucrat& a);
#endif