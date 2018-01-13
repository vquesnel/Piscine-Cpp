/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 11:44:03 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/13 13:16:34 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include "AEnv.hpp"
class Enemy : public AEnv
{
public:
	Enemy(void);
	Enemy(int x, int y);
	Enemy(Enemy const &instance);
	~Enemy(void);

	using AEnv::operator=;
	bool	move(int);

};
#endif
