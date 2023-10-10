/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:48:35 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/10 15:48:54 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

Contact::Contact() {

}

void Contact::setData(std::string firstName, std::string lastName, std::string nickName, std::string darkSecret, std::string phone) {
  this->firstName = firstName;
  this->lastName = lastName;
  this->nickName = nickName;
  this->darkSecret = darkSecret;
  this->phone = phone;
}

std::string Contact::getFirstName() {
  return this->firstName;
}

std::string Contact::getLastName() {
  return this->lastName;
}

std::string Contact::getNickName() {;
  return this->nickName;
}

std::string Contact::getdarkSecret() {
  return this->darkSecret;
}

std::string Contact::getPhone() {
  return this->phone;
}
