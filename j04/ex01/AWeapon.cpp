/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 09:14:43 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 13:34:27 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "AWeapon.hpp"


AWeapon::AWeapon(void) :
  _name("Plasma Rifle"),
  _apCost(5),
  _damage(21)
{}

AWeapon::AWeapon(std::string const &name, int apCost, int damage) :
  _name(name),
  _apCost(apCost),
  _damage(damage)
{}

AWeapon::AWeapon(AWeapon const &instance)
{
  *this = instance;
}

AWeapon::~AWeapon(void) {}

AWeapon  &AWeapon::operator=(AWeapon const &rhs)
{
  if (this != &rhs) {
    this->_name = rhs.getName();
    this->_apCost = rhs.getAPCost();
    this->_damage = rhs.getDamage();
  }
  return *this;
}

int     AWeapon::getAPCost(void) const
{
  return this->_apCost;
}

int     AWeapon::getDamage(void) const
{
  return this->_damage;
}

std::string  const &AWeapon::getName(void) const
{
  return this->_name;
}