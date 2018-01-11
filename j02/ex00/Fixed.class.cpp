/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 10:32:58 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/11 09:25:22 by vquesnel         ###   ########.fr       */
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

Fixed::~Fixed(void)
{
  std::cout << "Destructor called" << std::endl;
}

Fixed  &Fixed::operator=(Fixed const &rhs)
{
  std::cout << "Assignation operator called" << std::endl;
  if (this != &rhs)
    this->setRawBits(rhs.getRawBits());
  return *this;
}

int   Fixed::getRawBits(void) const
{
  std::cout << "getRawBits member function called" << std::endl;
  return this->_rawBits;
}

void  Fixed::setRawBits(int const raw)
{
  // std::cout << "setRawBits member function called" << std::endl;
  this->_rawBits = raw << Fixed::_nbBits;
  return;
}