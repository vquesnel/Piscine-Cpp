/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 11/01/2018 18:18:54 by vquesnel          #+#    #+#             */
/*   Updated: 11/01/2018 18:18:54 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
    throw std::invalid_argument("Impossible To create a Sorcerer without\
 a name and a title");

}

Sorcerer::Sorcerer(std::string name, std::string title) :
  _name(name),
	_title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born !"
   << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &copy)
{
	*this = copy;

	std::cout << this->_name << ", " << this->_title << ", is born !"
   << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title
  << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer				&Sorcerer::operator=(Sorcerer const &copy)
{
	this->_name = copy._name;
	this->_title = copy._title;

	return *this;
}

std::string				Sorcerer::getName(void) const
{
  return this->_name;
}

std::string				Sorcerer::getTitle(void) const
{
  return this->_title;
}

void					Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::ostream			&operator<<(std::ostream &o, Sorcerer const &rhs)
{
	o << "I am " << rhs.getName() << ", " << rhs.getTitle()
  << ", and I like ponies !" << std::endl;

	return o;
}
