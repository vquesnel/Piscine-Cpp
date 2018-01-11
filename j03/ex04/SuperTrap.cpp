/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 17:51:51 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/11 13:16:18 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) :
  ClapTrap(),
  FragTrap(),
  NinjaTrap()
{
  std::cout << "SUPER-TP " << this->_name << " is initialized with armor ---> "<< this->_maxHp << std::endl;
}

SuperTrap::SuperTrap(std::string name) :
  ClapTrap(name),
  FragTrap(),
  NinjaTrap()
{
  std::cout << "SUPER-TP " << this->_name << " is initialized" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &instance) :
  ClapTrap(instance),
  FragTrap(),
  NinjaTrap()
{
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
