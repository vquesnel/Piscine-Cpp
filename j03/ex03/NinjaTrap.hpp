/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:53:53 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/11 12:24:03 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public ClapTrap {
  public:
    NinjaTrap(void);
    NinjaTrap(std::string name);
    NinjaTrap(NinjaTrap const &instance);
    ~NinjaTrap(void);
    NinjaTrap    &operator=(NinjaTrap const &rhs);
    void          meleeAttack(std::string const &target);
    void          rangedAttack(std::string const &target);
    void          ninjaShoebox(ClapTrap &instance);
    void          ninjaShoebox(ScavTrap &instance);
    void          ninjaShoebox(FragTrap &instance);
    void          ninjaShoebox(NinjaTrap &instance);
  private:

};

#endif