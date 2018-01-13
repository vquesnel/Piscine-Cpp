/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 11:44:01 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/13 12:58:29 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void) :
  AEnv()
{
	char	form[2] = {'<','C'};

	this->_form = form[rand() % 2];
}

Enemy::Enemy(int x, int y) :
  AEnv(x, y)
{
  char	form[2] = {'<','C'};

  this->_form = form[rand() % 2];
}

Enemy::Enemy(Enemy const &instance) :
  AEnv(instance)
{
  *this = instance;
  return;
}

Enemy::~Enemy( void ) {}

bool 	Enemy::move(int frameCount) {
	if (this->getX() >= 11)
	{
		if (frameCount % 2 == 0) {
			this->_x--;
		}
		return true;
	}
	else
		return false;
}
