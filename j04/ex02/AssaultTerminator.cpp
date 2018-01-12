/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 14:20:49 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 16:19:25 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
  std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &instance)
{
  *this = instance;
  std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator(void)
{
  std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator     &AssaultTerminator::operator=(AssaultTerminator const &rhs)
{
   ISpaceMarine::operator=(rhs);
   return *this;
}

ISpaceMarine			*AssaultTerminator::clone(void) const
{
	return new AssaultTerminator(*this);
}

void          AssaultTerminator::battleCry(void) const
{
    std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void          AssaultTerminator::meleeAttack(void) const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}

void          AssaultTerminator::rangedAttack(void) const
{
    std::cout << "* does nothing *" << std::endl;
}