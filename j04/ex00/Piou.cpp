/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Piou.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 16:57:02 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 16:58:32 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Piou.hpp"

Piou::Piou(std::string name) :
  Victim(name)
{
	std::cout << "Zig zig." << std::endl;
}

Piou::Piou(Piou const &copy) :
  Victim(copy)
{
	std::cout << "Zig zig." << std::endl;
}

Piou::~Piou(void)
{
	std::cout << "Baaaaaaah...." << std::endl;
}

void   Piou::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a little unicorn!"
   << std::endl;
}
