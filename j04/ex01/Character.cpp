/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 09:14:24 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 13:11:36 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) :
  _name("vquesnel"),
  _ap(40),
  _weapon(NULL)
{}

Character::Character(std::string const &name) :
  _name(name),
  _ap(40),
  _weapon(NULL)
{}

Character::Character(Character const &instance)
{
  *this = instance;
}

Character::~Character(void) {}

Character   &Character::operator=(Character const &rhs)
{
  if (this != &rhs) {
    this->_name = rhs._name;
    this->_ap = rhs._ap;
    this->_weapon = rhs._weapon;
  }
  return *this;
}

void      Character::recoverAP(void)
{
  this->_ap = this->_ap >= 30 ?
    40 :
    this->_ap + 10;
}

void      Character::equip(AWeapon *weapon)
{
  this->_weapon = weapon;
}

void      Character::attack(Enemy *enemy)
{
  if ( !this->getWeapon() || this->_ap < this->getWeapon()->getAPCost()) {
    return;
  }
  std::cout << this->_name << " attacks " << enemy->getType() << " with a " <<
  this->getWeapon()->getName() << std::endl;
  this->getWeapon()->attack();
  this->_ap -= this->getWeapon()->getAPCost();
  enemy->takeDamage(this->getWeapon()->getDamage());
  if (enemy->getHP() <= 0) {
    delete enemy;
  }
}

std::string  const  Character::getName(void) const
{
  return this->_name;
}

int             Character::getAp(void) const
{
  return this->_ap;
}

AWeapon         *Character::getWeapon(void) const
{
  return this->_weapon;
}

std::ostream    &operator<<(std::ostream &o, Character const &character)
{
  o << character.getName() << " has " << character.getAp() << " AP and " <<
  (character.getWeapon() ? " wields a " + character.getWeapon()->getName() :
  "is unarmed") << std::endl;
  return o;
}