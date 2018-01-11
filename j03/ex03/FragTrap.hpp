/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:39:13 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/10 21:14:24 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
  public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(FragTrap const &instance);
    ~FragTrap(void);
    FragTrap    &operator=(FragTrap const &rhs);
    void        meleeAttack(std::string const &target);
    void        rangedAttack(std::string const &target);
    void        vaulthunter_dot_exe(std::string const & target);
  private:
    void        _grenadeAttack(std::string const &target);
    void        _freezeAttack(std::string const &target);
    void        _hammerAttack(std::string const &target);
    void        _fireAttack(std::string const &target);
    void        _badassAttack(std::string const &target);
};

#endif
