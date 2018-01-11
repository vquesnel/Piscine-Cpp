/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 17:51:49 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/10 17:59:39 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SUPERTRAP_H
# define SUPERTRAP_H

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
  public:
    SuperTrap(void);
    SuperTrap(std::string name);
    SuperTrap(SuperTrap const &instance);
    ~SuperTrap(void);
    SuperTrap    &operator=(SuperTrap const &rhs);

};

#endif