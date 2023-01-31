/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 13:30:33 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/28 18:02:58 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"
#include"beref.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include"ShrubberyCreationForm.hpp"
int main()
{
   try 
   {
        Bureaucrat B("aristo",1);
        ShrubberyCreationForm S("ASCII tree");
        RobotomyRequestForm R("Robot");
        PresidentialPardonForm P("Document");
        S.beSigned(B);
        B.executeForm(S);
        R.beSigned(B);
        R.execute(B);
        B.executeForm(R);
        P.beSigned(B);
        P.execute(B);
        S.execute(B);
        B.executeForm(P);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}