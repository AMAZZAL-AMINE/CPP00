/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:51:06 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/09 11:04:10 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP
#include "main.h"

class Contact {
  private :
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string darkSecret;
    std::string phone;
  public :
    Contact ();
    void setData(std::string firstName, std::string lastName, std::string nickName, std::string darkSecret, std::string phone);
    std::string getFirstName();
    std::string getLastName();
    std::string getNickName();
    std::string getdarkSecret();
    std::string getPhone();
};

#endif