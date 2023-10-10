/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   userInput.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:08:21 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/10 16:41:54 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

std::string  ReadInputFisrtName(std::string fisrtName) {
  std::cout << "Enter First Name : ";
  std::getline(std::cin, fisrtName);
  if (std::cin.eof()) {
    std::cout << std::endl;
    std::cout << "EOF" << std::endl;
    exit(0);
  }
  return fisrtName;
}

std::string  ReadInputLastName(std::string lastName) {
  std::cout << "Enter Last Name : ";
  std::getline(std::cin, lastName);
  if (std::cin.eof()) {
    std::cout << std::endl;
    std::cout << "EOF" << std::endl;
    exit(0);
  }
  return lastName;
}

std::string  ReadInputNickName(std::string nickName) {
  std::cout << "Enter Nick Name : ";
  std::getline(std::cin, nickName);
  if (std::cin.eof()) {
    std::cout << std::endl;
    std::cout << "EOF" << std::endl;
    exit(0);
  }
  return nickName;
}

std::string  ReadInputSecret(std::string secret) {
  std::cout << "Enter Secret Code : ";
  std::getline(std::cin, secret);
  if (std::cin.eof()) {
    std::cout << std::endl;
    std::cout << "EOF" << std::endl;
    exit(0);
  }
  return secret;
}

std::string  ReadInputPhone(std::string phone) {
  std::cout << "Enter Phome number : ";
  std::getline(std::cin, phone);
  if (std::cin.eof()) {
    std::cout << std::endl;
    std::cout << "EOF" << std::endl;
    exit(0);
  }
  return phone;
}

int FieldIsEmpty(std::string field) {
  if (field.empty()) {
    std::cout << "Field is empty, try again" << std::endl;
    return 1;
  }
  return 0;
}
