/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 14:20:54 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 17:28:04 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) :
  _count(0),
  _units(NULL)
{}

Squad::Squad(Squad const &instance)
{
  *this = instance;
}

Squad::~Squad(void)
{
	for (int i = 0; i < this->getCount(); i++)
		delete this->_units[i];
}

Squad     &Squad::operator=(Squad const &rhs)
{
  for (int i = 0; i < this->getCount(); i++)
    delete this->_units[i];

  for (int i = 0; i < rhs.getCount(); i++)
    this->_units[i] = rhs.getUnit(i)->clone();
  this->_count = rhs.getCount();

	return *this;
}

int     Squad::getCount(void) const
{
  return this->_count;
}

ISpaceMarine			*Squad::getUnit(int n) const
{
  if (n >= 0) {
	   return n < this->getCount() ? this->_units[n] : NULL;
   }
   return NULL;
}

int         Squad::push(ISpaceMarine *unit)
{
  if (!unit) {
    return this->getCount();
  }

  ISpaceMarine **tmp = this->_units;

  for (int i = 0; i < this->getCount(); i++) {
    if (tmp[i] == unit)
      return this->getCount();
  }
  this->_units = new ISpaceMarine*[this->getCount() + 1];
  for (int i = 0; i < this->getCount(); i++) {
    this->_units[i] = tmp[i];
  }
  if (tmp) {
     delete [] tmp;
   }
  this->_units[this->getCount()] = unit;
  return (++this->_count);
}