/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 10:32:58 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/09 14:12:15 by vquesnel         ###   ########.fr       */
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
  this->setRawBits(i << Fixed::_nbBits);
}

Fixed::Fixed(float const f)
{
  float byte = 1.0;
  int check = Fixed::_nbBits;
  while (check > 0) {
    byte *= 2;
    check--;
  }
  cout << "Float constructor called" << endl;
  this->setRawBits(f * byte);
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
  float byte = 1.0;
  int check = Fixed::_nbBits;
  while (check > 0) {
    byte *= 2;
    check--;
  }
  return (this->getRawBits() / byte);
}

int    Fixed::toInt(void) const
{
  return (this->getRawBits() >> Fixed::_nbBits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
  o << i.toFloat();
  return o;
}
