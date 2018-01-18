/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 13:44:50 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/19 00:15:10 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) {
  this->_store.reserve(0);
}

Span::Span(unsigned int x) {
  //allocate memory for (x) int;
  this->_store.reserve(x);
}

Span::Span(Span const &instance)
{
  *this = instance;
  return;
}

Span::~Span(void) {}

Span    &Span::operator=(Span const &rhs)
{
  if (this != &rhs) {
    this->_store = rhs._store;
  }
  return *this;
}

void    Span::addNumber(int n)
{
  //size -> number of elements
  //capacity -> sizeof of allocate storage
  if (this->_store.size() >= this->_store.capacity()) {
    throw std::runtime_error("Container is already full");
  }
  this->_store.push_back(n);
}

int     Span::shortestSpan(void) const
{
    std::vector<int>   cpy = this->_store;
    std::sort(cpy.begin(), cpy.end());
    if (cpy.size() ==  1) {
      throw std::runtime_error("Only one value, can't find a span");
    }
    //difference between consecutive int in loop
    std::adjacent_difference(cpy.begin(), cpy.end(), cpy.begin() - 1);
    return *(std::min_element(cpy.begin(), cpy.end()));
}

int     Span::longestSpan(void) const
{
  std::vector<int>   cpy = this->_store;
  std::sort(cpy.begin(), cpy.end());
  if (cpy.size() ==  1) {
    throw std::runtime_error("Only one value, can't find a span");
  }
  return cpy[cpy.size() -1] - cpy[0];
}
