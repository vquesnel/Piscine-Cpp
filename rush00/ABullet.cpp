/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ABullet.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 11:46:04 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/13 12:46:28 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ABullet.hpp"

ABullet::ABullet( void ) :
  AEnv()
{
	this->_form = "▬";
}

ABullet::ABullet(int x, int y) :
  AEnv(x, y)
{
	this->_form = "▬";
}

ABullet::ABullet(ABullet const & instance) :
  AEnv(instance)
{
  *this = instance;
  return;
}

ABullet::~ABullet( void ) {}

bool 	ABullet::move( int frameCount) {

	if (this->getX() > WIDTH + START_X - 3)
			return false;
	if (frameCount % 1 == 0){
		this->_x--;
	}
	return true;
}
