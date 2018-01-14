/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AEnv.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 11:44:09 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/14 12:57:16 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AEnv.hpp"
#include "Window.hpp"

AEnv::AEnv( void ) :
  _x(10),
  _y(10),
 _form(" ")
{}

AEnv::AEnv(int x, int y) :
  _x(x),
  _y(y),
  _form(" ")
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

std::string      AEnv::getForm(void) const
{
  return this->_form;
}

int       AEnv::getX(void) const
{
  return this->_x;
}

int       AEnv::getY(void) const
{
  return this->_y;
}
void	AEnv::toPrint() {


	if (this->_form == "#=#")
	{
		attron(COLOR_PAIR(5));
	    mvprintw(this->_y, this->_x, this->_form.c_str());
		attroff(COLOR_PAIR(5));
	}
	else if (this->_form == "[-]")
	{
		attron(COLOR_PAIR(1));
	    mvprintw(this->_y, this->_x, this->_form.c_str());
		attroff(COLOR_PAIR(1));
	}
	else if (this->_form == "=>")
	{
		attron(COLOR_PAIR(4));
	    mvprintw(this->_y, this->_x, this->_form.c_str());
		attroff(COLOR_PAIR(4));
	}
	else if (this->_form == "+")
	{
		attron(COLOR_PAIR(2));
	    mvprintw(this->_y, this->_x, this->_form.c_str());
		attroff(COLOR_PAIR(2));
	}
	else
	    mvprintw(this->_y, this->_x, this->_form.c_str());
}

bool	AEnv::colision(AEnv *&elem)
{
	return (this->getX() >= elem->getX() && this->getY() == elem->getY());
}
