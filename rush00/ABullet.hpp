/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ABullet.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 11:46:02 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/13 11:52:48 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABULLET_HPP
# define ABULLET_HPP

# include <iostream>
# include "AEnv.hpp"

class ABullet : public AEnv
{
  public:
    ABullet(void);
    ABullet(int x, int y);
    ABullet(ABullet const &instance);
    ~ABullet(void);

    using AEnv::operator=;
    bool  move(int frameCount);
    bool  colision(AEnv const &elem);
  protected:
  private:
};

#endif
