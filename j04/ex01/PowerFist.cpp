/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 09:14:38 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 13:03:39 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PowerFist.hpp"


PowerFist::PowerFist(void) :
  AWeapon("Power Fist", 8, 50)
{}

PowerFist::PowerFist(PowerFist const &instance) :
  AWeapon(instance)
{}

PowerFist::~PowerFist(void) {}

PowerFist   &PowerFist::operator=(PowerFist const &rhs)
{
  AWeapon::operator=(rhs);
  return *this;
}

void          PowerFist::attack(void) const
{
  std::cout << "* pschhh... SBAM! *" <<std::endl;
}
