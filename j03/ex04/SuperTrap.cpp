/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 17:51:51 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/10 18:12:36 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) :
  ClapTrap()
{
  this->FragTrap::_maxHp = 100;
  this->FragTrap::_hp = 100;
  this->NinjaTrap::_ep = 120;
  this->NinjaTrap::_maxEp = 120;
  this->FragTrap::_level = 1;
  this->NinjaTrap::_meleeDamage = 60;
  this->FragTrap::_rangedDamage = 20;
  this->FragTrap::_armorDamage = 5;
  std::cout << "SUPER-TP " << this->_name << " is initialized" << std::endl;
}

SuperTrap::SuperTrap(std::string name) :
  ClapTrap(name)
{
  this->FragTrap::_maxHp = 100;
  this->FragTrap::_hp = 100;
  this->NinjaTrap::_ep = 120;
  this->NinjaTrap::_maxEp = 120;
  this->FragTrap::_level = 1;
  this->NinjaTrap::_meleeDamage = 60;
  this->FragTrap::_rangedDamage = 20;
  this->FragTrap::_armorDamage = 5;
  std::cout << "SUPER-TP " << this->FragTrap::_name << " is initialized" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &instance) :
  ClapTrap(instance)
{
  *this = instance;
  std::cout << "SUPER-TP " << this->_name << " is initialized by copy" << std::endl;
  return;
}

SuperTrap::~SuperTrap(void) {
  std::cout << "SUPER-TP " << this->_name << " died" << std::endl;
}

SuperTrap  &SuperTrap::operator=(SuperTrap const &rhs)
{
  if (this != &rhs) {
    this->_name = rhs._name + ".copy";
    this->_hp = rhs._hp;
    this->_ep = rhs._ep;
    this->_level = rhs._level;
    this->_meleeDamage = rhs._meleeDamage;
    this->_rangedDamage = rhs._rangedDamage;
    this->_armorDamage = rhs._armorDamage;
  }
  return *this;
}
