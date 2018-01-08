/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 11:51:05 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/08 12:32:38 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) {
  std::string names[] = {
    "Ray", "Orval", "Milford",
    "Jame", "Jimmy", "Efrain",
    "Ralph", "Edmund", "Claudio",
    "Hai"
  };

  std::string types[] = {
    "Infected", "Dangerous", "StormTrooper"
  };

  this->horde = new Zombie[n];
  this->num = n;
  for (int i = 0; i < n; i++) {
    this->horde[i].name = names[rand() % 10];
    this->horde[i].type = types[rand() % 3];
  }
}

ZombieHorde::~ZombieHorde(void) {
  delete [] this->horde;
}

void ZombieHorde::announce(void) const{
  for (int i = 0; i <  this->num; i++) {
    this->horde[i].announce();
  }
}