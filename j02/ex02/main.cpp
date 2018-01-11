/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 10:55:48 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/11 09:46:45 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"

int main( void ) {
   Fixed a;
   Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
   Fixed const c( Fixed(2.012f) / Fixed(3) );

   std::cout << a << std::endl;
   std::cout << a+(c) << std::endl;
   std::cout << a-(c) << std::endl;
   std::cout << b*(c) << std::endl;
   std::cout << b/(c) << std::endl;
   std::cout << ++a << std::endl;
   std::cout << a << std::endl;
   std::cout << a++ << std::endl;
   std::cout << a << std::endl;
   std::cout << b << std::endl;
   std::cout << Fixed::max( a, b ) << std::endl;
   return 0;
}