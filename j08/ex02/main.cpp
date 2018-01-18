/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 17:41:11 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/19 00:28:35 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>

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
  std::cout << "---- Array ----" << std::endl;
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  ++it;
  --it;
  while (it != ite) {
    if (static_cast<size_t>(*it) == mstack.size()) {
      std::cout << "*it == mstack.size() ==> [";
    }
    std::cout << *it << (static_cast<size_t>(*it) == mstack.size() ? "]" : "")
    << std::endl;
    ++it;
   }
   std::stack<int> s(mstack);
   return 0;
}
