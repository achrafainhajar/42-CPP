/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:12:32 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/30 09:34:57 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include<iostream>

class WrongAnimal{
    protected:
    std::string type;
    public:
    WrongAnimal();
    void makeSound()const;
    std::string getType() const;
    WrongAnimal &operator=(const WrongAnimal &other);
    WrongAnimal(const WrongAnimal &a);
   ~WrongAnimal();
};

#endif