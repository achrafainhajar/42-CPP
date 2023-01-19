/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:00:12 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/19 02:12:01 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"phonebook.hpp"
void PhoneBook::init(void)
{
    i = 0;
    size = 0;
}
void PhoneBook::ADD(void)
{
    int k = Contact[i].add_to();
    if(k == 1)
    {
        if(size < 8)
            size++;
        i++;
    }
    else
    {
        std::cout<<"you cannot have an empty field"<<std::endl;
    }
    if(i == 8)
        i = 0;
}
void PhoneBook::print(int i)
{
    if(i <= size && i > 0)
        Contact[i - 1].to_print();
    else
        std::cout << "invalid number"<<std::endl;
}
void PhoneBook::search(void)
{
    int b;
    int num;
    int k;
    if(size == 0)
    {
        std::cout<<"there is no contact try to add one"<<std::endl;
        return;
    }
    std::string index;
    std::cout<< std::setw(10)<<"index";
    std::cout << "|";
    std::cout<< std::setw(10)<<"first name";
    std::cout << "|";
    std::cout<< std::setw(10)<<"last name";
    std::cout << "|";
    std::cout<< std::setw(10)<<"nickname";
    std::cout << "|";
    std::cout << std::endl;
    k = 1;
    while(k <= size)
    {
        std::cout<< std::setw(10)<<k;
        std::cout<<"|";
        Contact[k - 1].to_print3();
        k++;
    }
    std::cout<<"index: ";
    getline(std::cin,index);
    if (!std::cin)
        exit(0);
    if(index.empty() || index.length() > 2)
    {
        std::cout << "invalid number" << std::endl;
        return;
    }
    b = 0;
    while(index[b])
    {
        if(isalpha(index[b]))
        {
            std::cout << "invalid number" << std::endl;
            return;
        }
        b++;
    }
    num = std::stoi(index);
    print(num);
}