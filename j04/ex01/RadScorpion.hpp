/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 09:14:28 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 12:51:58 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy {
  public:
    RadScorpion(void);
    RadScorpion(RadScorpion const &instance);
    ~RadScorpion(void);

    RadScorpion			 &operator=(RadScorpion const &rhs);
    using            Enemy::takeDamage;
};

#endif