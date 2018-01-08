/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 14:23:09 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/07 15:01:31 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap(int del)
{
	Pony *pony = new Pony(2, 300, 60, del);
   if (pony->getDelete() == 1) {
      delete pony;
   }

}

void ponyOnTheStack(void)
{
   Pony pony(3, 400, 70, 0);

}

int main(void)
{
   std::cout << "Create pony on the heap and delete it" << std::endl << std::endl;
   ponyOnTheHeap(1);
   std::cout << std::endl << "Create pony on the heap and keep it --> no destructor called" << std::endl << std::endl;
   ponyOnTheHeap(0);
   std::cout << std::endl <<"Create pony on the stack" << std::endl << std::endl;
   ponyOnTheStack();
   std::cout << std::endl <<"End of instances creation" << std::endl;
   return 0;
}
