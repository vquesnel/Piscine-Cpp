/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 11:44:05 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/13 13:15:28 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
# define PLAYER_HPP

# include <iostream>
# include "AEnv.hpp"

class Player : public AEnv {
  public:
    Player(void);
    Player(int x, int y);
    Player(Player const &instance);
    ~Player(void);

    using   AEnv::operator=;
  	bool	  move(int);
    void    move(int const key, int const frameCount);
    char    getForm() const;
    int     getLife() const;
  protected:
    int     _life;
};

#endif
