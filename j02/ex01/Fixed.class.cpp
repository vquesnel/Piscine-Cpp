/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 10:32:58 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/09 13:12:19 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::_nbBits = 8;

Fixed::Fixed(void) :
  _rawBits(0)
{
    cout << "Default constructor called" << endl;
};

Fixed::Fixed(Fixed const &instance)
{
  cout << "Copy constructor called" << endl;
  *this = instance;
  return;
}

Fixed::Fixed(int const i)
{
  cout << "Int constructor called" << endl;
  this->setRawBits(i * (256));
}

Fixed::Fixed(float const f)
{
  cout << "Float constructor called" << endl;
  this->setRawBits(roundf(f * (256)));
}

Fixed::~Fixed(void)
{
  cout << "Destructor called" << endl;
}

Fixed  &Fixed::operator=(Fixed const &rhs)
{
  cout << "Assignation operator called" << endl;
  if (this != &rhs)
    this->setRawBits(rhs.getRawBits());
  return *this;
}

int   Fixed::getRawBits(void) const
{
  // cout << "getRawBits member function called" << endl;
  return this->_rawBits;
}

void  Fixed::setRawBits(int const raw)
{
  // cout << "setRawBits member function called" << endl;
  this->_rawBits = raw;
  return;
}

float  Fixed::toFloat(void) const
{
  return (this->getRawBits() / (256.0));
}

int    Fixed::toInt(void) const
{
  return (this->getRawBits() / 256.0);
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
  o << i.toFloat();
  return o;
}
