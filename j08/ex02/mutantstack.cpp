/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 17:29:53 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/19 16:03:36 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template<typename T>
MutantStack<T>::iterator::iterator(MutantStack &instance, size_t i) :
_instance(instance), _i(i)
{}

template<typename T>
MutantStack<T>::iterator::~iterator(void) {}

template<typename T>
typename MutantStack<T>::iterator  &MutantStack<T>::iterator::operator=(MutantStack::iterator const &rhs)
{
  if (this != &rhs) {
    this->_instance = rhs._instance;
    this->_i = rhs._i;
  }
  std::cout << this->_instance[this->_i];
  return *this;
}

template<typename T>
typename MutantStack<T>::iterator  &MutantStack<T>::iterator::operator++(void)
{
  if (this->_i < this->_instance.size())
    this->_i++;
  return *this;
}

template<typename T>
typename MutantStack<T>::iterator  &MutantStack<T>::iterator::operator--(void)
{
  if (this->_i < this->_instance.size())
    this->_i--;
  return *this;
}

template<typename T>
typename MutantStack<T>::iterator  MutantStack<T>::iterator::operator++(int)
{
  MutantStack<T>::iterator tmp(*this);
  if (this->_i < this->_instance.size())
    this->_i++;
  return tmp;
}

template<typename T>
typename MutantStack<T>::iterator  MutantStack<T>::iterator::operator--(int)
{
  MutantStack<T>::iterator tmp(*this);
  if (this->_i < this->_instance.size())
    this->_i--;
  return tmp;
}

template<typename T>
bool    MutantStack<T>::iterator::operator==(MutantStack<T>::iterator const &rhs)
{
  return this->_i == rhs._i;
}

template<typename T>
bool    MutantStack<T>::iterator::operator!=(MutantStack<T>::iterator const &rhs)
{
  return this->_i != rhs._i;
}
template<typename T>
bool    MutantStack<T>::iterator::operator<=(MutantStack<T>::iterator const &rhs)
{
  return this->_i <= rhs._i;
}

template<typename T>
bool    MutantStack<T>::iterator::operator<(MutantStack<T>::iterator const &rhs)
{
  return this->_i < rhs._i;
}

template<typename T>
bool    MutantStack<T>::iterator::operator>=(MutantStack<T>::iterator const &rhs)
{
  return this->_i >= rhs._i;
}

template<typename T>
T  const   &MutantStack<T>::iterator::operator*() {
  return (*this)._instance[(*this)._i];
}

template<typename T>
T  const   &MutantStack<T>::operator[](size_t i) {
  return this->c[i];
}

template<typename T>
bool    MutantStack<T>::iterator::operator>(MutantStack<T>::iterator const &rhs)
{
  return this->_i > rhs._i;
}
