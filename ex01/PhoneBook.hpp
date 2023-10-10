/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:13:01 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/10 16:20:23 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "main.h"

class PhoneBook {
  private :
    Contact *contacts;
    int index;
    int is_full;
  public :
    PhoneBook();
    void printTbaleHeader();
    void AddContact(std::string firstName, std::string lastName, std::string nickName, std::string darkSecret, std::string phone);
    void DisplayContacts();
    void SearchForContact(int searchQuery);
    void Exit(void);
    std::string turncateString(std::string str);
};

#endif