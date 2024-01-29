/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:47:36 by aainhaja          #+#    #+#             */
/*   Updated: 2023/02/06 01:32:44 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
Base::~Base()
{
    
}
Base *generate(void)
{
    int seed = time(0);
    srand(seed);
    int random = (rand() % 3 + 1 );
    switch(random)
    {
        case 1:
        A *test1;
        test1 = new A;
        return test1;
        case 2:
        B *test2;
        test2 = new B;
        return test2;
        case 3:
        C *test3;
        test3 = new C;
        return test3;
        default:
            break;
    }
    Base *l;
    l = NULL;
    return(l);
}
void identify(Base* p)
{
    A *a = dynamic_cast<A*>(p);
    B *b = dynamic_cast<B*>(p);
    C *c = dynamic_cast<C*>(p);
    if(a != NULL)
        std::cout<<"this pointer is a A object"<<std::endl;
    if(b != NULL)
        std::cout<<"this pointer is a B object"<<std::endl;
    if(c != NULL)
        std::cout<<"this pointer is a C object"<<std::endl;
    
}
void identify(Base& p)
{
    try {
        A &a = dynamic_cast<A&>(p);
        std::cout<<"this pointer is a A object"<<std::endl;
        (void)a; 
    } catch(std::bad_cast &bc) {
        
    }
    try {
        B &b = dynamic_cast<B&>(p);
       std::cout<<"this pointer is a B object"<<std::endl;
        (void)b;
    } catch(std::bad_cast &bc) {
        
    }
    try {
        C &c = dynamic_cast<C&>(p);
        std::cout<<"this pointer is a C object"<<std::endl;
        (void)c;
    } catch(std::bad_cast &bc) {
        
    }
}