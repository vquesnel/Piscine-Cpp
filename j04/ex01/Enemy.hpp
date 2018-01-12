/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 09:14:36 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 12:25:52 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy {
  public:
    Enemy(int hp = 170, std::string const &type = "Super Mutant");
    Enemy(Enemy const &instance);
    virtual ~Enemy(void);

    Enemy			    &operator=(Enemy const &rhs);
    int           getHP(void) const;
    std::string   const &getType(void) const;
    virtual void  takeDamage(int damage);
  protected:
    int          _hp;
    std::string  _type;
  private:
    Enemy(void);
};

#endif