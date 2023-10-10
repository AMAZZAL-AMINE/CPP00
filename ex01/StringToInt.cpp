/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringToInt.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:10:20 by mamazzal          #+#    #+#             */
/*   Updated: 2023/10/09 13:13:36 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int StringToInt(std::string str) {
  int count = 0;
  int res = 0;
  while (str[count] != '\0') {
    if (std::isalpha(str[count])) {
      std::cout << "Invalid input" << std::endl;
      return -1;
    }
    res = res * 10 + str[count] - '0';
    count++;
  }
  return res;
}
