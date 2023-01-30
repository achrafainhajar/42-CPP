/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:05:55 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/30 09:49:57 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include"Animal.hpp"
#include"Brain.hpp"

class Cat : public Animal{
    Brain *brain;
    public:
    Cat();
    void makeSound() const;
    Cat(const Cat &a);
    Cat & operator=(const Cat &other);
    ~Cat();
};
#endif