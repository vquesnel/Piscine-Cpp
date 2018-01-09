/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 10:32:58 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/09 17:29:05 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::_nbBits = 8;

Fixed::Fixed(void) :
  _rawBits(0)
{
    // std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(Fixed const &instance)
{
  // std::cout << "Copy constructor called" << std::endl;
  *this = instance;
  return;
}

Fixed::Fixed(int const i)
{
  // std::cout << "Int constructor called" << std::endl;
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
  // std::cout << "Float constructor called" << std::endl;
  this->setRawBits(f * byte);
}

Fixed::~Fixed(void)
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed  &Fixed::operator=(Fixed const &rhs)
{
    // std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
      this->setRawBits(rhs.getRawBits());
    return *this;
}

int   Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return this->_rawBits;
}

void  Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
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

bool  Fixed::operator<(Fixed const &rhs) const
{
    return (this->getRawBits() < rhs.getRawBits());
}

bool  Fixed::operator<=(Fixed const &rhs) const
{
    return (this->getRawBits() <= rhs.getRawBits());
}

bool  Fixed::operator>(Fixed const &rhs) const
{
    return (this->getRawBits() > rhs.getRawBits());
}

bool  Fixed::operator>=(Fixed const &rhs) const
{
    return (this->getRawBits() >= rhs.getRawBits());
}

bool  Fixed::operator==(Fixed const &rhs) const
{
    return (this->getRawBits() == rhs.getRawBits());
}

bool  Fixed::operator!=(Fixed const &rhs) const
{
    return (this->getRawBits() != rhs.getRawBits());
}

Fixed  Fixed::operator+(Fixed const &rhs) const
{
    Fixed res(this->toFloat() + rhs.toFloat());

    return res;
}

Fixed  Fixed::operator-(Fixed const &rhs) const
{
    Fixed res(this->toFloat() - rhs.toFloat());

    return res;
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
    Fixed res(this->toFloat() / rhs.toFloat());

    return res;
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
    Fixed res(this->toFloat() * rhs.toFloat());

    return res;
}

Fixed   &Fixed::max(Fixed &lhs, Fixed &rhs) const
{
    if (lhs.toFloat() > rhs.toFloat())
      return lhs;
    return rhs;
}

Fixed const   &Fixed::max(Fixed const &lhs, Fixed const &rhs)
{
    if (lhs.toFloat() > rhs.toFloat())
      return lhs;
    return rhs;
}

Fixed   &Fixed::min(Fixed &lhs, Fixed &rhs) const
{
    if (lhs.toFloat() < rhs.toFloat())
      return lhs;
    return rhs;
}

Fixed const  &Fixed::min(Fixed const &lhs, Fixed const &rhs)
{
    if (lhs.toFloat() < rhs.toFloat())
      return lhs;
    return rhs;
}

Fixed     &Fixed::operator++(void)
{
    this->_rawBits++;
    return *this;
}

Fixed     Fixed::operator++(int)
{
    Fixed res;

    res = *this;
    this->_rawBits++;
    return res;
}
Fixed     &Fixed::operator--(void)
{
    this->_rawBits--;
    return *this;
}

Fixed     Fixed::operator--(int)
{
  Fixed res;

  res = *this;
  this->_rawBits--;
  return res;
}
std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
    o << i.toFloat();
    return o;
}
