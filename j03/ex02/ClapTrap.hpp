/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 13:57:15 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/10 15:37:55 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap {
  public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &instance);
    ~ClapTrap(void);
    ClapTrap    &operator=(ClapTrap const &rhs);
    void        meleeAttack(std::string const &target);
    void        rangedAttack(std::string const &target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);
    int         getHitPoints(void) const;
  protected:
    std::string       _name;
    static const int  _maxHp;
    int               _maxEp;
    int               _hp;
    int               _ep;
    int               _level;
    int               _meleeDamage;
    int               _rangedDamage;
    int               _armorDamage;
};

#endif