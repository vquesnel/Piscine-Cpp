/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnemyBullet.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 12:13:16 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/13 12:57:22 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EnemyBullet.hpp"

EnemyBullet::EnemyBullet(void) :
  AEnv(),
  ABullet()
{
  this->_form = "+";
}

EnemyBullet::EnemyBullet(EnemyBullet const &instance) :
  AEnv(),
  ABullet(instance)
{
  *this = instance;
  return;
}

EnemyBullet::EnemyBullet(int x, int y) :
  AEnv(x, y),
  ABullet()
{
    this->_form = "+";
}

EnemyBullet::~EnemyBullet(void) {}

bool 	EnemyBullet::move( int frameCount) {

	if (_x < START_X + 3)
			return false;
	if (frameCount % 1 == 0){
		_x--;
	}
	return true;
}
