/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 09:14:35 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 12:52:58 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void) {}

Enemy::Enemy(int hp, std::string const &type) :
  _hp(hp),
  _type(type)
{}

Enemy::Enemy(Enemy const &instance)
{
    *this = instance;
}

Enemy::~Enemy(void) {}

Enemy   &Enemy::operator=(Enemy const &rhs)
{
  if (this != &rhs) {
    this->_hp = rhs.getHP();
    this->_type = rhs.getType();
  }
  return *this;
}

int   Enemy::getHP(void) const
{
  return this->_hp;
}

std::string const &Enemy::getType(void) const
{
  return this->_type;
}

void    Enemy::takeDamage(int damage)
{
  this->_hp = damage > 0 ?
    this->getHP() - damage > 0 ?
      this->_hp - damage : 0
    : this->_hp;
}