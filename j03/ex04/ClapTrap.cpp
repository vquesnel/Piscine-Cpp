/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 13:57:19 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/11 11:05:17 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
  _name("default name")
{
  std::cout << "CL4P-TP " << this->_name << " is initialized" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
  _name(name)
{
  std::cout << "CL4P-TP " << this->_name << " is initialized" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &instance)
{
  *this = instance;
  std::cout << "CL4P-TP " << this->_name << " is initialized by copy" << std::endl;
  return;
}

ClapTrap::~ClapTrap(void) {
  std::cout << "CL4P-TP " << this->_name << " died" << std::endl;
}

ClapTrap  &ClapTrap::operator=(ClapTrap const &rhs)
{
  if (this != &rhs) {
    this->_name = rhs._name + ".copy";
    this->_hp = rhs._hp;
    this->_ep = rhs._ep;
    this->_maxEp = rhs._maxEp;
    this->_maxHp = rhs._maxHp;
    this->_level = rhs._level;
    this->_meleeDamage = rhs._meleeDamage;
    this->_rangedDamage = rhs._rangedDamage;
    this->_armorDamage = rhs._armorDamage;
  }
  return *this;
}

int       ClapTrap::getHitPoints(void) const
{
  return this->_hp;
}

void     ClapTrap::meleeAttack(std::string const &target)
{
  std::cout << "CL4P-TP " << this->_name << " attacks " <<
   target << " at melee, causing " << this->_meleeDamage <<
   " damage's points !" << std::endl;
}

void     ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << "CL4P-TP " << this->_name << " attacks " <<
    target << " at ranged, causing " << this->_rangedDamage <<
    " damage's points !" << std::endl;
}

void     ClapTrap::takeDamage(unsigned int amount)
{
    int damages = (int)amount;

    if (damages <= this->_armorDamage) {
      std::cout <<  "CL4P-TP "<< this->_name <<
      " didn't feel anything thanks to his armor !" <<  std::endl;
    }
    else {
      if (this->_hp + this->_armorDamage - damages < 0)
        this->_hp = 0;
      else
        this->_hp -= damages - this->_armorDamage;
      std::cout <<  "CL4P-TP "<< this->_name <<
        " loses " << damages - this->_armorDamage <<
        " damages' points, his new HP is " << this->_hp << std::endl;
    }
}

void     ClapTrap::beRepaired(unsigned int amount)
{
  int reparation = (int)amount;

  if (reparation + this->_hp >= this->_maxHp) {
    this->_hp = 100;
    std::cout <<  "CL4P-TP "<< this->_name <<
    " has a full HP" <<  std::endl;
  }
  else {
    this->_hp += reparation;
    std::cout <<  "Health over here!" << std::endl <<
      "CL4P-TP "<< this->_name <<
      " is repaired by " << reparation << " points, his new HP is "
      << this->_hp << std::endl;
  }
}