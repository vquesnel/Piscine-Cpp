/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 10:32:58 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/11 09:45:05 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::_nbBits = 8;

Fixed::Fixed(void) :
  _rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(Fixed const &instance)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = instance;
  return;
}

Fixed::Fixed(int const i)
{
  std::cout << "Int constructor called" << std::endl;
  this->setRawBits(i);
}

Fixed::Fixed(float const f)
{
  std::cout << "Float constructor called" << std::endl;
  this->setRawBits(f);
}

Fixed::~Fixed(void)
{
  std::cout << "Destructor called" << std::endl;
}

Fixed  &Fixed::operator=(Fixed const &rhs)
{
  std::cout << "Assignation operator called" << std::endl;
  if (this != &rhs)
    this->_rawBits= rhs._rawBits;
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
  this->_rawBits = raw << Fixed::_nbBits;
  return;
}

void  Fixed::setRawBits(float const raw)
{
  // std::cout << "setRawBits member function called" << std::endl;
  this->_rawBits = static_cast<int>(roundf(raw * (1 << Fixed::_nbBits)));
  return;
}

float  Fixed::toFloat(void) const
{
  return static_cast<float>(this->getRawBits()) /
        static_cast<float>(1 << Fixed::_nbBits);
}

int    Fixed::toInt(void) const
{
  return this->getRawBits() / (1 << Fixed::_nbBits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
  o << i.toFloat();
  return o;
}

Fixed				Fixed::operator+(Fixed const &rhs)	const
{
  Fixed result(this->toFloat() - rhs.toFloat());

	return result;
}

Fixed				Fixed::operator-(Fixed const &rhs)	const
{
  Fixed result(this->toFloat() - rhs.toFloat());

	return result;
}

Fixed				Fixed::operator*(Fixed const &rhs)	const
{
	Fixed result(this->toFloat() * rhs.toFloat());

	return result;
}

Fixed				Fixed::operator/(Fixed const &rhs)	const
{
	Fixed result(this->toFloat() / rhs.toFloat());

	return result;
}

bool				Fixed::operator>(Fixed const &rhs)	const
{
	return this->_rawBits > rhs._rawBits;
}

bool				Fixed::operator>=(Fixed const &rhs)	const
{
	return this->_rawBits >= rhs._rawBits;
}

bool				Fixed::operator<(Fixed const &rhs)	const
{
	return this->_rawBits < rhs._rawBits;
}

bool				Fixed::operator<=(Fixed const &rhs)	const
{
	return this->_rawBits <= rhs._rawBits;
}

bool				Fixed::operator==(Fixed const &rhs)	const
{
	return this->_rawBits == rhs._rawBits;
}

bool				Fixed::operator!=(Fixed const &rhs)	const
{
	return this->_rawBits != rhs._rawBits;
}

Fixed				&Fixed::operator++(void)
{
	this->_rawBits++;
	return *this;
}

Fixed				Fixed::operator++(int)
{
	Fixed res(*this);

	this->operator++();
	return res;
}

Fixed				&Fixed::operator--(void)
{
	this->_rawBits--;
	return *this;
}

Fixed				Fixed::operator--(int)
{
	Fixed res(*this);

	this->operator--();
	return res;
}

Fixed				&Fixed::min(Fixed &fix1, Fixed &fix2) const
{
	return fix1 > fix2 ? fix2 : fix1;
}

Fixed const			&Fixed::min(Fixed const &fix1, const Fixed &fix2)
{
	return fix1 > fix2 ? fix2 : fix1;
}

Fixed				&Fixed::max(Fixed &fix1, Fixed &fix2) const
{
	return fix1 < fix2 ? fix2 : fix1;
}

Fixed const			&Fixed::max(Fixed const &fix1, const Fixed &fix2)
{
	return fix1 < fix2 ? fix2 : fix1;
}

