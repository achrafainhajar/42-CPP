/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:10:12 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/30 09:34:45 by aainhaja         ###   ########.fr       */
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
    WrongCat(const WrongCat &a);
    WrongCat & operator=(const WrongCat &other);
    ~WrongCat();
};
#endif