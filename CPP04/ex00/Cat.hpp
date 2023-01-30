/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:05:55 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/30 09:26:51 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include"Animal.hpp"

class Cat : public Animal{
    public:
    Cat();
    Cat(const Cat &a);
    Cat & operator=(const Cat &other);
    void makeSound() const ;
    ~Cat();
};
#endif