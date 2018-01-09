/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 10:14:16 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/09 12:29:17 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {
  return;
}
ZombieEvent::~ZombieEvent(void) {
  return;
}
void ZombieEvent::setZombieType(std::string type)
{
  this->zombieType = type;
}

Zombie  *ZombieEvent::newZombie(std::string name)
{
  Zombie *zombie = new Zombie(name,this->zombieType);

  return (zombie);
}

Zombie   *ZombieEvent::randomChump(void)
{
   const std::string names[] = {
    "Ray", "Orval", "Milford",
    "Jame", "Jimmy", "Efrain",
    "Ralph", "Edmund", "Claudio",
    "Hai"
  };
  Zombie      *zombie;
  std::srand((unsigned)time(0));
  zombie = newZombie(names[rand() % 10]);
  zombie->announce();
  return (zombie);
}