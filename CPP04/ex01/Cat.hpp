/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:05:55 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/31 10:20:43 by aainhaja         ###   ########.fr       */
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