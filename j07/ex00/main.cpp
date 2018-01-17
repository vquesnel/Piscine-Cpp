/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 15:18:45 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/17 15:43:30 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Awesome {
  public:
    Awesome( int n ) : _n( n ) {}

    bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
    bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
    bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
    bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
    bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
    bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
    int _n;
};

template<typename T>
void  swap(T &first, T &second)
{
  T tmp = first;
  first = second;
  second = tmp;
}

template<typename T>
T     min(T first, T second)
{
  return first <= second ? first : second;
}

template<typename T>
T     max(T first, T second)
{
  return first >= second ? first : second;
}

int main( void ) {
  int a = 2;
  int b = 3;

  ::swap( a, b );
  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
  std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl;

  std::string c = "chaine1";
  std::string d = "chaine2";

  ::swap(c, d);
  std::cout << "c = " << c << ", d = " << d << std::endl;
  std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
  std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl << std::endl;

  Awesome e(10);
  Awesome f(12);

  ::swap(e, f);
  std::cout << "e = " << e._n << ", f = " << f._n <<  std::endl;
  std::cout << "min( c, d ) = " << ::min( e, f )._n << std::endl;
  std::cout << "max( c, d ) = " << ::max( e, f )._n << std::endl;
  return 0;
}
