/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 13:44:50 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/18 16:43:00 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) {
  this->_store.reserve(0);
}

Span::Span(unsigned int x) {
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
    std::adjacent_difference(cpy.begin(), cpy.end(), cpy.begin() - 1);
    return cpy[std::distance(cpy.begin(), std::min_element(cpy.begin(), cpy.end() - 1))];
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
