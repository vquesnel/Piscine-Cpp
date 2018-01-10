/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 12:53:27 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/10 13:11:29 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>

class ScavTrap {
  public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &instance);
    ~ScavTrap(void);
    ScavTrap    &operator=(ScavTrap const &rhs);
    void        meleeAttack(std::string const &target);
    void        rangedAttack(std::string const &target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);
    void        challengeNewcomer(std::string const & target);
    int         getHitPoints(void) const;
  private:
    void        _grenadeChallenge(std::string const &target);
    void        _freezeChallenge(std::string const &target);
    void        _hammerChallenge(std::string const &target);
    void        _fireChallenge(std::string const &target);
    void        _badassChallenge(std::string const &target);
    std::string       _name;
    static const int  _maxHp;
    static const int  _maxEp;
    int               _hp;
    int               _ep;
    int               _level;
    int               _meleeDamage;
    int               _rangedDamage;
    int               _armorDamage;
};

#endif