/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 13:44:29 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/18 16:42:21 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main()
{
	Span sp = Span(5);

	try {
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
    sp.addNumber(32);
    sp.addNumber(11);
		sp.addNumber(11);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
  try {
	   std::cout << sp.shortestSpan() << std::endl;
	    std::cout << sp.longestSpan() << std::endl;
  }
  catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

	Span sp2 = Span(15000);

	try {
		for (int i = 0; i < 15000; ++i)
		{
			sp2.addNumber(i * 10);
		}
	}
	catch (std::overflow_error e) {
		std::cout << e.what() << std::endl;
	}
  try {
	   std::cout << sp2.shortestSpan() << std::endl;
	   std::cout << sp2.longestSpan() << std::endl;
   }
   catch (std::exception &e) {
     std::cout << e.what() << std::endl;
   }
	return 0;
}
