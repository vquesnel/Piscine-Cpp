/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnemyBullet.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 12:13:19 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/14 12:03:24 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMYBULLET_HPP
# define ENEMYBULLET_HPP

# include <iostream>
# include "AEnv.hpp"
# include "ABullet.hpp"

class EnemyBullet : virtual public AEnv, virtual public ABullet {
  public:
    EnemyBullet(void);
    EnemyBullet(int x, int y);
    EnemyBullet(EnemyBullet const &instance);
    ~EnemyBullet(void);

    using AEnv::operator=;
    bool  move(int frameCount);
  protected:
  private:
};

#endif
