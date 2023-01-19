/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:00:27 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/18 10:00:28 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include"contact.hpp"

class PhoneBook{
    Contact Contact[8];
    int i;
    int size;
    public :
    void init(void);
    void ADD(void);
    void print(int i);
    void search(void);
};
#endif