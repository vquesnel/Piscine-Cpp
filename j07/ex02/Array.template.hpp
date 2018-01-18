/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.template.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 09:38:22 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/18 11:01:21 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TEMPLATE_HPP
# define ARRAY_TEMPLATE_HPP

# include <stdexcept>
# include <iostream>
# include <sstream>

template<typename T>
class Array
{
  public:
    Array(void) : _array(new T[0]), _len(0) {}
    Array(unsigned int n) : _array(new T[n]), _len(n) {}
    Array(Array const &instance) { *this = instance; }
    ~Array(void) { delete [] this->_array; }

    Array       &operator=(Array const &rhs) {
      delete [] this->_array;
      this->_array = new T[rhs._len];
      this->_len = rhs._len;
      for(unsigned int i = 0; i < rhs._len; i++)
        this->_array[i] = rhs._array[i];
      return *this;
    }

    T       &operator[](unsigned int i) {
      if (i < 0 || i >= this->_len) {
        std::stringstream ss;
        ss << "Array [" << i << "] : out of ranges.";
        throw std::runtime_error(ss.str());
      }
      return this->_array[i];
    }

    unsigned int   size(void) const {
      return this->_len;
    }
  protected:
    T             *_array;
    unsigned int  _len;
};

#endif
