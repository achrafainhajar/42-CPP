/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 13:30:33 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/03 17:19:14 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"
#include"Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include"ShrubberyCreationForm.hpp"
#include"Intern.hpp"
int main()
{
   try 
   {
        Bureaucrat B(1,"ttttt");
        ShrubberyCreationForm S("shru");
        RobotomyRequestForm R("robot");
        PresidentialPardonForm P("presdient");
        S.beSigned(B);
        B.executeForm(S);
        R.beSigned(B);
        R.execute(B);
        B.executeForm(R);
        P.beSigned(B);
        P.execute(B);
        //S.execute(B);
        B.executeForm(P);
        std::cout<<std::endl<<std::endl<<std::endl;
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        if(rrf == NULL)
            exit(1);
        rrf->beSigned(B);
        //if u change it check for null;
        rrf->execute(B);
        while(1);
        delete rrf;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}