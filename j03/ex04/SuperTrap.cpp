/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 17:51:51 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/11 16:03:02 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) :
  ClapTrap(),
  FragTrap(),
  NinjaTrap()
{
  this->_maxHp = 100;
  this->_hp = 100;
  this->_maxEp =  120;
  this->_ep = 120;
  this->_meleeDamage = 60;
  this->_rangedDamage = 20;
  this->_armorDamage = 5;
  this->_level = 1;
  std::cout << "SUPER-TP " << this->_name << " is initialized with armor " << std::endl;
}

SuperTrap::SuperTrap(std::string name) :
  ClapTrap(name),
  FragTrap(),
  NinjaTrap()
{
  this->_maxHp = 100;
  this->_hp = 100;
  this->_maxEp =  120;
  this->_ep = 120;
  this->_meleeDamage = 60;
  this->_rangedDamage = 20;
  this->_armorDamage = 5;
  this->_level = 1;
  std::cout << "SUPER-TP " << this->_name << " is initialized" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &instance) :
  ClapTrap(instance),
  FragTrap(),
  NinjaTrap()
{
  *this = instance;
  std::cout << "SUPER-TP " << this->_name << " is initialized by copy" << std::endl;
  return;
}

SuperTrap::~SuperTrap(void) {
  std::cout << "SUPER-TP " << this->FragTrap::_name << " died" << std::endl;
}

SuperTrap  &SuperTrap::operator=(SuperTrap const &rhs)
{
  if (this != &rhs) {
    this->_name = rhs._name + ".copy";
    this->_hp = rhs._hp;
    this->_maxHp = rhs._maxHp;
    this->_ep = rhs._ep;
    this->_maxEp = rhs._maxEp;
    this->_meleeDamage = rhs._meleeDamage;
    this->_rangedDamage = rhs._rangedDamage;
    this->_armorDamage = rhs._armorDamage;
  }
  return *this;
}
