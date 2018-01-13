/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AEnv.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 11:44:09 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/13 11:44:35 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AEnv.hpp"

AEnv::AEnv( void ) :
  _x(10),
  _y(10),
 _form(' ')
{}

AEnv::AEnv(int x, int y) :
  _x(x),
  _y(y),
  _form(' ')
{}

AEnv::AEnv(AEnv const &instance)
 {
  *this = instance;
}

AEnv::~AEnv( void ) {}

AEnv const &	AEnv::operator=(AEnv const & rhs) {

	if (this != &rhs) {
		_form = rhs._form;
		_x = rhs._x;
		_y = rhs._y;
	}
	return *this;
}

int       AEnv::getX(void) const
{
  return this->_x;
}

int       AEnv::getY(void) const
{
  return this->_y;
}

bool	AEnv::colision(AEnv *&elem)
{
	return (this->getX() >= elem->getX() && this->getX()== elem->getY());
}
