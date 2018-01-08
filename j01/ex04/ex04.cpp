/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 15:18:22 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/07 15:44:06 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
   std::string str = "Hi THIS IS BRAIN";
   std::string *ptr = &str;
   std::string &addr = str;

   std::cout << *ptr << std::endl;
   std::cout << addr << std::endl;

}
