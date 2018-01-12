/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 14:20:58 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 16:19:14 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
  std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &instance)
{
  *this = instance;
  std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::~TacticalMarine(void)
{
  std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine     &TacticalMarine::operator=(TacticalMarine const &rhs)
{
   ISpaceMarine::operator=(rhs);
   return *this;
}

ISpaceMarine			*TacticalMarine::clone(void) const
{
	return new TacticalMarine(*this);
}

void          TacticalMarine::battleCry(void) const
{
    std::cout << "For the holy PLOT !" << std::endl;
}

void          TacticalMarine::meleeAttack(void) const
{
    std::cout << "* attacks with chainsword *" << std::endl;
}

void          TacticalMarine::rangedAttack(void) const
{
    std::cout << "* attacks with bolter *" << std::endl;
}