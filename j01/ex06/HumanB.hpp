/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:06:40 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/08 13:41:14 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
  public:
    HumanB(std::string name);
    ~HumanB(void);
    void	attack(void) const;
    void	setWeapon(Weapon &newWeapon);
    std::string		name;
    Weapon*			weapon;
};

#endif
