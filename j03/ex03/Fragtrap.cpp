/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:39:15 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/11 10:28:08 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) :
  ClapTrap()
{
  this->_maxEp = 100;
  this->_maxHp = 100;
  this->_hp = 100;
  this->_ep = 100;
  this->_level = 1;
  this->_meleeDamage = 30;
  this->_rangedDamage = 20;
  this->_armorDamage = 5;
  std::cout << "FR4G-TP " << this->_name << " is initialized" << std::endl;
}

FragTrap::FragTrap(std::string name) :
  ClapTrap(name)
{
  this->_maxEp = 100;
  this->_maxHp = 100;
  this->_hp = 100;
  this->_ep = 100;
  this->_level = 1;
  this->_meleeDamage = 30;
  this->_rangedDamage = 20;
  this->_armorDamage = 5;
  std::cout << "FR4G-TP " << this->_name << " is initialized" << std::endl;
}

FragTrap::FragTrap(FragTrap const &instance) :
  ClapTrap(instance)
{
  *this = instance;
  std::cout << "FR4G-TP " << this->_name << " is initialized by copy" << std::endl;
  return;
}

FragTrap::~FragTrap(void) {
  std::cout << "FR4G-TP " << this->_name << " died" << std::endl;
}

FragTrap  &FragTrap::operator=(FragTrap const &rhs)
{
  if (this != &rhs) {
    this->_name = rhs._name + ".copy";
    this->_hp = rhs._hp;
    this->_maxEp = rhs._maxEp;
    this->_maxHp = rhs._maxHp;
    this->_ep = rhs._ep;
    this->_level = rhs._level;
    this->_meleeDamage = rhs._meleeDamage;
    this->_rangedDamage = rhs._rangedDamage;
    this->_armorDamage = rhs._armorDamage;
  }
  return *this;
}

void     FragTrap::_grenadeAttack(std::string const &target)
{
    std::cout << "Bad guy go boom!" << std::endl << "--> ";
    this->rangedAttack(target);
}

void     FragTrap::_freezeAttack(std::string const &target)
{
    std::cout << "Aww! Now I want a snow cone." << std::endl << "--> ";
    this->rangedAttack(target);
}

void     FragTrap::_badassAttack(std::string const &target)
{
    std::cout << "Holy moly!" << std::endl << "--> ";
    this->rangedAttack(target);
}

void     FragTrap::_hammerAttack(std::string const &target)
{
    std::cout << "Let's knock out this badass" << std::endl << "--> ";
    this->meleeAttack(target);
}

void     FragTrap::_fireAttack(std::string const &target)
{
    std::cout << "Let's burn this badass" << std::endl << "--> ";
    this->meleeAttack(target);
}

void     FragTrap::meleeAttack(std::string const &target)
{
  std::cout << "FR4G-TP " << this->_name << " attacks " <<
   target << " at melee, causing " << this->_meleeDamage <<
   " damage's points !" << std::endl;
}

void     FragTrap::rangedAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->_name << " attacks " <<
    target << " at ranged, causing " << this->_rangedDamage <<
    " damage's points !" << std::endl;
}

void    FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    int   which;
    void  (FragTrap::*actions[5])(std::string const &target) = {
      &FragTrap::_grenadeAttack,
      &FragTrap::_freezeAttack,
      &FragTrap::_badassAttack,
      &FragTrap::_hammerAttack,
      &FragTrap::_fireAttack,
    };

    if (this->_ep < 25) {
      std::cout << "Need some energy!" << std::endl;
      return;
    }
    this->_ep -= 25;
    which = rand() % 5;
    std::cout << "Resequencing combat protocols!" << std::endl;
    (this->*(actions[which]))(target);
}
