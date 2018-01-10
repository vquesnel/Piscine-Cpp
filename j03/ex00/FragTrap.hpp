/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:39:13 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/10 12:01:57 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>

class FragTrap {
  public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(FragTrap const &instance);
    ~FragTrap(void);
    FragTrap    &operator=(FragTrap const &rhs);
    void        meleeAttack(std::string const &target);
    void        rangedAttack(std::string const &target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);
    void        vaulthunter_dot_exe(std::string const & target);
    int         getHitPoints(void) const;
  private:
    void        _grenadeAttack(std::string const &target);
    void        _freezeAttack(std::string const &target);
    void        _hammerAttack(std::string const &target);
    void        _fireAttack(std::string const &target);
    void        _badassAttack(std::string const &target);
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