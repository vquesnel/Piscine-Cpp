/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 12:53:27 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/10 21:15:01 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &instance);
    ~ScavTrap(void);
    ScavTrap    &operator=(ScavTrap const &rhs);
    void        meleeAttack(std::string const &target);
    void        rangedAttack(std::string const &target);
    void        challengeNewcomer(std::string const & target);
  private:
    void        _grenadeChallenge(std::string const &target);
    void        _freezeChallenge(std::string const &target);
    void        _hammerChallenge(std::string const &target);
    void        _fireChallenge(std::string const &target);
    void        _badassChallenge(std::string const &target);
};

#endif
