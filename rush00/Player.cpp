/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 11:44:08 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/14 14:42:06 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Player.hpp"
# include "Window.hpp"

Player::Player(void) :
  AEnv(),
  _life(5)
{
  this->_form = "[->";
}

Player::Player(Player const &instance) :
  AEnv(instance)
{
  *this = instance;
  return;
}

Player::Player(int x, int y) :
  AEnv(x, y),
  _life(5)
{
  this->_form = "[->";
}

Player::~Player(void) {}

int       Player::getLife(void) const
{
  return this->_life;
}

bool  Player::move(int frameCount)
{
  	if (frameCount == 0)
  		return true;
  	return false;
}

void 	Player::move(int const key, int const frameCount)
{
	if (frameCount) {
		if (key == KEY_UP && this->getY() > (START_Y + 1))
			this->_y--;
		else if (key == KEY_DOWN && this->getY() < (START_Y + HEIGHT - 2))
			this->_y++;
	}
}
