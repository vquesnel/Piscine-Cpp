/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 11/01/2018 18:36:52 by vquesnel          #+#    #+#             */
/*   Updated: 11/01/2018 18:36:52 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just popped !"
   << std::endl;
}

Victim::Victim(Victim const &copy)
{
	*this = copy;
	std::cout << "Some random victim called " << this->_name << " just popped !"
   << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason !"
   << std::endl;
}

Victim					&Victim::operator=(Victim const &rhs)
{
	this->_name = rhs._name;

	return *this;
}

std::string				Victim::getName(void) const
{
   return this->_name;
 }

void					Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep !"
  << std::endl;
}

std::ostream			&operator<<(std::ostream &o, Victim const &victim)
{
	o << "I'm " << victim.getName() << " and i like otters !" << std::endl;

	return o;
}
