/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnemyBullet.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 12:13:16 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/14 12:03:24 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EnemyBullet.hpp"
#include "Window.hpp"

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

	if (this->_x < START_X + 3)
			return false;
	if (frameCount % 1 == 0){
		this->_x--;
	}
	return true;
}
