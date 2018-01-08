/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:06:52 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/08 13:16:26 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {}
Weapon::~Weapon(void) {}

std::string const &Weapon::getType(void) const
{
    return(this->type);
}

void Weapon::setType(std::string type)
{
  this->type = type;
}