/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:29:43 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/10 16:50:04 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"


int main() {
  PhoneBook phoneBook;
  std::string fname, lname, nname, secret, phone, command, ContactId;
  while (true) {
    while (command == "ADD") {
      fname  = ReadInputFisrtName(fname);
      while (FieldIsEmpty(fname))
        fname = ReadInputFisrtName(fname);
      lname  = ReadInputLastName(lname);
      while (FieldIsEmpty(lname))
        lname = ReadInputLastName(lname);
      nname = ReadInputNickName(nname);
      while (FieldIsEmpty(nname))
        nname = ReadInputNickName(nname);
      secret = ReadInputSecret(secret);
      while (FieldIsEmpty(secret))
        std::getline(std::cin, secret);
      phone = ReadInputPhone(phone);
      while (FieldIsEmpty(phone))
        phone = ReadInputPhone(phone);
      phoneBook.AddContact(fname,lname, nname, secret, phone); 
      phone = "", secret = "", nname = "", fname = "", lname = "",command = "";
    }
    if (command == "SEARCH") {
      phoneBook.DisplayContacts();
      std::cout << "Enter Contact ID : ";
      std::getline(std::cin, ContactId);
      if (std::cin.eof()) {
        std::cout << std::endl;
        std::cout << "EOF, ..........." << std::endl;
        return 0;
      }
      if (ContactId.length() > 9) {
         std::cout << "Nah, Reallllly ??" << std::endl;
      }else {
        if (StringToInt(ContactId) >= 0)
          phoneBook.SearchForContact(StringToInt(ContactId));
      }
    }else if (command == "EXIT") {
      phoneBook.Exit();
    }
    std::cout << "Enter you command : " ;
    std::getline(std::cin, command);
    if (std::cin.eof()) {
      std::cout << std::endl;
      std::cout << "EOF, ..........." << std::endl;
      return 0;
    }
  }
  return 0;
}
