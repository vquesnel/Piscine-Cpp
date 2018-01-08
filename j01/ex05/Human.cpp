/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:38:42 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/08 13:00:16 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {}

Human::~Human(void) {}

std::string Human::identify(void) const
{
  return this->selfBrain.identify();
}

Brain const   &Human::getBrain(void)
{
  return this->selfBrain;
}