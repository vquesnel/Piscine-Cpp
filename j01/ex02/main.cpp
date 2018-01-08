/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 10:14:19 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/08 11:53:29 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
  Zombie stackZ1("Pierre", "Infected");
  Zombie stackZ2("Paul", "Dangerous");
  Zombie stackZ3("Jacques", "StormTrooper");
  ZombieEvent event;

  const std::string *type[] = {"Infected", "Dangerous", "StormTrooper"};

  std::cout << "let's create 3 zombies on the stack" << std::endl << std::endl;
  stackZ1.announce();
  stackZ2.announce();
  stackZ3.announce();
  std::cout << "let's create a zombie on the heap thank's to ZombieEvent's functions" << std::endl << std::endl;
  event.setZombieType("StormTrooper");
  Zombie  *heapZ1 = event.newZombie("Anakin");
  heapZ1->announce();
  std::cout << "let's create 6 zombies on the heap thank's to ZombieEvent's functions which announce themselves and will be deleted right after" << std::endl << std::endl;

  Zombie  *heapZ2[6];
  int i = 0;
  while ( i < 6 ) {
    std::srand(time(NULL));
    event.setZombieType(type[rand() % 3]);
    heapZ2[i] = event.randomChump();
    delete heapZ2[i];
    i++;
  }
  std::cout << std::endl;
  delete heapZ1;

  return 0;
}