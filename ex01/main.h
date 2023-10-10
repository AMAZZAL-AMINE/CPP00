/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:15:45 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/09 13:13:48 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <string.h>
#include <iomanip>
#include "Contact.hpp"
#include "PhoneBook.hpp"

std::string  ReadInputFisrtName(std::string fisrtName);
std::string  ReadInputLastName(std::string lastName);
std::string  ReadInputNickName(std::string nickName);
std::string  ReadInputSecret(std::string secret);
std::string  ReadInputPhone(std::string phone) ;
int          FieldIsEmpty(std::string field);
int          StringToInt(std::string str);

#endif