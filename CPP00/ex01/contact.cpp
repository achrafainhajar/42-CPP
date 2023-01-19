/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:00:06 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/18 10:00:08 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"phonebook.hpp"
#include"contact.hpp"
void Contact::replace(void)
{
    std::replace(first_name.begin(), first_name.end(), '\t', ' ');
    std::replace(last_name.begin(), last_name.end(), '\t', ' ');
    std::replace(nickname.begin(), nickname.end(), '\t', ' ');
}
int Contact::add_to(void)
{
    std::cout<<"first name: ";
    getline(std::cin,first_name);
    if(first_name.empty())
        return(0);
    if (!std::cin)
        exit(0);
    std::cout<<"last name: ";
    getline(std::cin,last_name);
    if(last_name.empty())
        return(0);
    if (!std::cin)
        exit(0);
    std::cout<<"nickname: ";
    getline(std::cin,nickname);
    if(nickname.empty())
        return(0);
    if (!std::cin)
        exit(0);
    std::cout<<"phone number: ";
    getline(std::cin,phone_number);
    if(phone_number.empty())
        return(0);
    if (!std::cin)
        exit(0);
    std::cout<<"darkest secret: ";
    getline(std::cin,darkest_secret);
    if(darkest_secret.empty())
        return(0);
    if (!std::cin)
        exit(0);
    replace();
    return(1);
}
void Contact::to_print(void)
{
    std::cout<<"first name: ";
    std::cout<<first_name<< std::endl;
    std::cout<<"last name: ";
    std::cout<<last_name<< std::endl;
    std::cout<<"nickname: ";
    std::cout<<nickname<< std::endl;
    std::cout<<"phone number: ";
    std::cout<<phone_number<< std::endl;
    std::cout<<"darkest secret: ";
    std::cout<<darkest_secret<< std::endl;
}
void Contact::to_print3(void)
{
    if(first_name.length() > 9)
    {
        std::cout<<first_name.substr(0,9);
        std::cout<< ".";
    }
    else
        std::cout<< std::setw(10)<<first_name;
    std::cout << "|";
    if(last_name.length() > 9)
    {
        std::cout<<last_name.substr(0,9);
        std::cout<< ".";
    }
    else
        std::cout<< std::setw(10)<<last_name;
    std::cout << "|";
    if(nickname.length() > 9)
    {
        std::cout<<nickname.substr(0,9);
        std::cout<< ".";
    }
    else
        std::cout<< std::setw(10)<<nickname;
    std::cout << "|";
    std::cout << std::endl;
}
int main(void)
{
    std::string str;
    PhoneBook phone;
    phone.init();
    while(1)
    {
        std::cout<<"please enter : ADD or SEARCH or EXIT"<<std::endl;
        getline(std::cin,str);
        if (!std::cin)
            exit(0);
        if(!str.compare("ADD"))
            phone.ADD();
        else if(!str.compare("SEARCH"))
            phone.search();
        else if(!str.compare("EXIT"))
            break;
        else
            std::cout << "INVALID ARGUMENT"<<std::endl;
    }
}