/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:06:42 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/08 13:44:26 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
  public:
    HumanA(std::string name, Weapon &newWeapon);
    ~HumanA(void);
    void	attack(void) const;
    std::string		name;
    Weapon			&weapon;
};

#endif
