/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 09:14:33 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 12:51:37 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) :
  Enemy(170, "Super Mutant")
{
  std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &instance) :
  Enemy(instance)
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant(void) {
  std::cout << "Aaargh ..." << std::endl;
}

SuperMutant   &SuperMutant::operator=(SuperMutant const &rhs)
{
  Enemy::operator=(rhs);

  return *this;
}

void          SuperMutant::takeDamage(int damage)
{
  damage -= 3;

  this->_hp = damage > 0 ?
    this->getHP() - damage > 0 ?
      this->_hp - damage : 0
    : this->_hp;
}