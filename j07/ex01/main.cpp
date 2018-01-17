/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 17:26:31 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/17 18:17:09 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Awesome {
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T, typename F>
void	iter(T *array, unsigned int length, F f)
{
	for (unsigned int i = 0; i < length; ++i)
		f(array[i]);
}

template< typename T>
void	iter( T *array, unsigned int length, void (*f)(T const &))
{
	for (unsigned int i = 0; i < length; ++i)
		f(array[i]);
}

template<typename T>
void	print(T const &var) {
	std::cout << var << std::endl;
}

int main() {

  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  ::iter( tab, 5, print);
  ::iter(tab2, 5, print<Awesome>);

  return 0;
};
