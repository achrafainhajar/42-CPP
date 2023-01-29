/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrongcat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:10:12 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/29 17:37:56 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP 
#define WRONGCAT_HPP 

#include"WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
    WrongCat();
    std::string getType() const;
    void makeSound() const;
};
#endif