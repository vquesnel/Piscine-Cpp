/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 17:41:11 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/26 18:57:36 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include "mutantstack.cpp"

int main() {
  MutantStack<int> mstack;

  mstack.push(5);
  mstack.push(17);
  std::cout << "size after two push()--> [" << mstack.size()
  << "]" << std::endl;
  mstack.top();
  mstack.pop();
  std::cout << "size after a pop() *remove operation* on top data(17)--> ["
   << mstack.size() << "]" << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  mstack.push(0);
  std::cout << "Final size --> [" << mstack.size()
  << "]" << std::endl;

  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  std::cout << "------ post increment ------" << std::endl;
  std::cout << "*(it)++ = " << *(it)++ << std::endl;
  std::cout << "*(it)-- = " << *(it)-- << std::endl;
  std::cout << "------ current it ------" << std::endl;
  std::cout << *it << std::endl;
  std::cout << "------ pre increment ------" << std::endl;
  std::cout << "*++(it) = " << *++(it) << std::endl;
  std::cout << "*--(it) = " << *--(it) << std::endl;
  std::cout << "---- Display Array ----" << std::endl;
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
   }
   std::stack<int> s(mstack);
   return 0;
}
