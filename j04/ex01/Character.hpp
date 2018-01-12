/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 09:14:26 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 13:11:35 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
  public:
    Character(void);
    Character(std::string const &name);
    Character(Character const &instance);
    ~Character(void);

    Character    &operator=(Character const &rhs);
    void         recoverAP(void);
    void         equip(AWeapon *weapon);
    void         attack(Enemy *enemy);
    std::string const getName(void) const;
    int          getAp(void) const;
    AWeapon      *getWeapon(void) const;
  private:
    std::string   _name;
    int           _ap;
    AWeapon       *_weapon;
};

std::ostream			&operator<<(std::ostream &o, Character const &character);

#endif
