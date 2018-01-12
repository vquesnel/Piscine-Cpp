/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 09:14:40 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 13:34:27 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"


PlasmaRifle::PlasmaRifle(void) :
  AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &instance) :
  AWeapon(instance)
{}

PlasmaRifle::~PlasmaRifle(void) {}

PlasmaRifle   &PlasmaRifle::operator=(PlasmaRifle const &rhs)
{
  AWeapon::operator=(rhs);
  return *this;
}

void          PlasmaRifle::attack(void) const
{
  std::cout << "* piouuu piouuu piouuu *" <<std::endl;
}
