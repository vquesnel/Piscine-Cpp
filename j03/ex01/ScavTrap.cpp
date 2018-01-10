/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 12:53:29 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/10 13:47:11 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

const int ScavTrap::_maxHp = 100;
const int ScavTrap::_maxEp = 50;

ScavTrap::ScavTrap(void) :
  _name("default name"),
  _hp(100),
  _ep(50),
  _level(1),
  _meleeDamage(20),
  _rangedDamage(15),
  _armorDamage(3)
{
  std::cout << "SC4V-TP " << this->_name << " is initialized" << std::endl;
}

ScavTrap::ScavTrap(std::string name) :
  _name(name),
  _hp(100),
  _ep(50),
  _level(1),
  _meleeDamage(20),
  _rangedDamage(15),
  _armorDamage(3)
{
  std::cout << "SC4V-TP " << this->_name << " is initialized" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &instance)
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
int       ScavTrap::getHitPoints(void) const
{
  return this->_hp;
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
    std::cout << "Hey" << target << "Try to kill this badass" << std::endl;
}

void     ScavTrap::_hammerChallenge(std::string const &target)
{
    std::cout << "Hey " << target << "Try to knock out this badass" << std::endl;
}

void     ScavTrap::_fireChallenge(std::string const &target)
{
    std::cout << "Hey " << target << "Try to burn this badass" << std::endl;
}

void     ScavTrap::takeDamage(unsigned int amount)
{
    int damages = (int) amount;

    if (damages <= this->_armorDamage) {
      std::cout <<  "SC4V-TP "<< this->_name <<
      " didn't feel anything thanks to his armor !" <<  std::endl;
    }
    else {
      if (this->_hp + this->_armorDamage - damages < 0)
        this->_hp = 0;
      else
        this->_hp -= damages - this->_armorDamage;
      std::cout <<  "SC4V-TP "<< this->_name <<
        " loses " << damages - this->_armorDamage <<
        " damages' points, his new HP is " << this->_hp << std::endl;
    }
}

void     ScavTrap::beRepaired(unsigned int amount)
{
  int reparation = (int)amount;

  if (reparation + this->_hp >= this->_maxHp) {
    this->_hp = 100;
    std::cout <<  "SC4V-TP "<< this->_name <<
    " has a full HP" <<  std::endl;
  }
  else {
    this->_hp += reparation;
    std::cout <<  "Health over here!" << std::endl <<
      "SC4V-TP "<< this->_name <<
      " is repaired by " << reparation << " points, his new HP is "
      << this->_hp << std::endl;
  }
}

void    ScavTrap::challengeNewcomer(std::string const &target)
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