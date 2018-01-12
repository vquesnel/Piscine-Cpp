/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 09:14:30 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 12:52:12 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) :
  Enemy(80, "RadScorpion")
{
  std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &instance) :
  Enemy(instance)
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void) {
  std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion   &RadScorpion::operator=(RadScorpion const &rhs)
{
  Enemy::operator=(rhs);

  return *this;
}
