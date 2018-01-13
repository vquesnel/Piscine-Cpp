/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlayerBullet.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 13:04:52 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/13 13:05:17 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYERBULLET_HPP
# define PLAYERBULLET_HPP

# include <iostream>
# include "AEnv.hpp"
# include "ABullet.hpp"

class PlayerBullet: virtual public AEnv, virtual public ABullet {
  public:
    PlayerBullet(void);
    PlayerBullet(int x, int y);
    PlayerBullet(PlayerBullet const &instance);
    ~PlayerBullet(void);

    using AEnv::operator=;
    using ABullet::move;
  protected:
  private:
};

#endif
