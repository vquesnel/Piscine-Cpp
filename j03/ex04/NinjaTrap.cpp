/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 17:10:25 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/11 10:28:30 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) :
  ClapTrap()
{
  this->_maxHp = 60;
  this->_maxEp = 120;
  this->_hp = 60;
  this->_ep = 120;
  this->_level = 1;
  this->_meleeDamage = 60;
  this->_rangedDamage = 5;
  this->_armorDamage = 0;
  std::cout << "NINJ4-TP " << this->_name << " is initialized" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) :
  ClapTrap(name)
{
  this->_maxHp = 60;
  this->_maxEp = 120;
  this->_hp = 60;
  this->_ep = 120;
  this->_level = 1;
  this->_meleeDamage = 60;
  this->_rangedDamage = 5;
  this->_armorDamage = 0;
  std::cout << "NINJ4-TP " << this->_name << " is initialized" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &instance) :
  ClapTrap(instance)
{
  *this = instance;
  std::cout << "NINJ4-TP " << this->_name << " is initialized by copy" << std::endl;
  return;
}

NinjaTrap::~NinjaTrap(void) {
  std::cout << "NINJ4-TP " << this->_name << " died" << std::endl;
}

NinjaTrap  &NinjaTrap::operator=(NinjaTrap const &rhs)
{
  if (this != &rhs) {
    this->_name = rhs._name + ".copy";
    this->_hp = rhs._hp;
    this->_ep = rhs._ep;
    this->_maxHp = rhs._maxHp;
    this->_maxEp = rhs._maxEp;
    this->_level = rhs._level;
    this->_meleeDamage = rhs._meleeDamage;
    this->_rangedDamage = rhs._rangedDamage;
    this->_armorDamage = rhs._armorDamage;
  }
  return *this;
}
void     NinjaTrap::meleeAttack(std::string const &target)
{
  std::cout << "NINJ4-TP " << this->_name << " attacks " <<
   target << " at melee, causing " << this->_meleeDamage <<
   " damage's points !" << std::endl;
}

void     NinjaTrap::rangedAttack(std::string const &target)
{
    std::cout << "NINJ4-TP " << this->_name << " attacks " <<
    target << " at ranged, causing " << this->_rangedDamage <<
    " damage's points !" << std::endl;
}
void          NinjaTrap::ninjaShoebox(ClapTrap &instance)
{
  instance.meleeAttack("Toto");
	instance.rangedAttack("Toto");
}
void          NinjaTrap::ninjaShoebox(ScavTrap &instance)
{
  instance.meleeAttack("Tata");
	instance.rangedAttack("Tata");
}
void          NinjaTrap::ninjaShoebox(FragTrap &instance)
{
  instance.meleeAttack("Titi");
	instance.rangedAttack("Titi");
}
void          NinjaTrap::ninjaShoebox(NinjaTrap &instance)
{
  instance.meleeAttack("Tutu");
	instance.rangedAttack("Tutu");
}