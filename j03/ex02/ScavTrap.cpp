/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 12:53:29 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/11 13:54:06 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) :
  ClapTrap(),
{
  this->_maxEp = 50;
  this->_hp = 100;
  this->_ep = 50;
  this->_level = 1;
  this->_meleeDamage = 20;
  this->_rangedDamage = 15;
  this->_armorDamage = 3;
  std::cout << "SC4V-TP " << this->_name << " is initialized" << std::endl;
}

ScavTrap::ScavTrap(std::string name) :
  ClapTrap(name)
{
  this->_name = name;
  this->_maxEp = 50;
  this->_hp = 100;
  this->_ep = 50;
  this->_level = 1;
  this->_meleeDamage = 20;
  this->_rangedDamage = 15;
  this->_armorDamage = 3;
  std::cout << "SC4V-TP " << this->_name << " is initialized" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &instance) :
  ClapTrap(instance)
{
  *this = instance;
  std::cout << "SC4V-TP " << this->_name << " is initialized by copy" << std::endl;
  return;
}

ScavTrap::~ScavTrap(void) {
  std::cout << "SC4V-TP " << this->_name << " died" << std::endl;
}

ScavTrap  &ScavTrap::operator=(ScavTrap const &rhs)
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

void     ScavTrap::_grenadeChallenge(std::string const &target)
{
    std::cout << "Hey " << target << "Try to make Bad guy go boom!" << std::endl;
}

void     ScavTrap::_freezeChallenge(std::string const &target)
{
    std::cout << "Hey " << target << "You want an ice cream ? Try to freeze an ennemy" << std::endl;
}

void     ScavTrap::_badassChallenge(std::string const &target)
{
    std::cout << "Hey " << target << "Try to kill this badass" << std::endl;
}

void     ScavTrap::_hammerChallenge(std::string const &target)
{
    std::cout << "Hey " << target << "Try to knock out this badass" << std::endl;
}

void     ScavTrap::_fireChallenge(std::string const &target)
{
    std::cout << "Hey " << target << "Try to burn this badass" << std::endl;
}

void     ScavTrap::meleeAttack(std::string const &target)
{
  std::cout << "SC4V-TP " << this->_name << " attacks " <<
   target << " at melee, causing " << this->_meleeDamage <<
   " damage's points !" << std::endl;
}

void     ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << "SC4V-TP " << this->_name << " attacks " <<
    target << " at ranged, causing " << this->_rangedDamage <<
    " damage's points !" << std::endl;
}

void     ScavTrap::challengeNewcomer(std::string const &target)
{
    int   which;
    void  (ScavTrap::*actions[5])(std::string const &target) = {
      &ScavTrap::_grenadeChallenge,
      &ScavTrap::_freezeChallenge,
      &ScavTrap::_badassChallenge,
      &ScavTrap::_hammerChallenge,
      &ScavTrap::_fireChallenge,
    };
    which = rand() % 5;
    std::cout << "Searching for a challenge.." << std::endl;
    (this->*(actions[which]))(target);
}
