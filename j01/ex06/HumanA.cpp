/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:06:49 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/08 13:44:04 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &newWeapon):
  name(name),
  weapon(newWeapon) {}

HumanA::~HumanA(void) {}

void   HumanA::attack(void) const
{
  std::cout<< this->name + " attacks with his " + this->weapon.type << std::endl;
}