/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 14:23:03 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/07 15:05:00 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(int age, int weight, int height, int del) :
   age(age),
   weight(weight),
   height(height),
   _delete(del)
{
   std::cout << "A Pony is born" << std::endl;
   std::cout << "age: " << this->age << std::endl;
   std::cout << "weigth: " << this->weight << std::endl;
   std::cout << "height: " << this->height << std::endl;
   return;
}

Pony::~Pony(void)
{
   std::cout << "A Pony died" << std::endl;
   return;
}

int Pony::getDelete(void) const
{
   return Pony::_delete;
}

int _delete = 0;
