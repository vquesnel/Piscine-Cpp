/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:06:47 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/08 13:41:30 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name) {}

HumanB::~HumanB(void) {}

void   HumanB::attack(void) const
{
  std::cout<< this->name + " attacks with his " + this->weapon->type << std::endl;
}

void   HumanB::setWeapon(Weapon &newWeapon)
{
  this->weapon = &newWeapon;
}