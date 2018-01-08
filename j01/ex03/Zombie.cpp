/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 10:14:18 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/08 12:14:24 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
  return;
}

Zombie::~Zombie(void)
{
  std::cout << "<"+ this->name + " ("+ this->type +")> died!"  << std::endl;
  return;
}

void Zombie::announce(void) const {
  std::cout << "<" + this->name + " (" + this->type +")> Braiiiiiiinnnssss..." << std::endl;
}
