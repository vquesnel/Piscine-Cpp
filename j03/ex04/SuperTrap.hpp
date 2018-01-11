/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 17:51:49 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/11 13:59:24 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : virtual public ClapTrap, public FragTrap, public NinjaTrap
{
	public:
    SuperTrap(void);
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const &copy);
		~SuperTrap(void);

		SuperTrap  &operator=(SuperTrap const &rhs);
		using FragTrap::rangedAttack;
		using NinjaTrap::meleeAttack;
	protected:
		using FragTrap::_maxHp;
		using FragTrap::_hp;
		using NinjaTrap::_maxEp;
		using NinjaTrap::_ep;
		using NinjaTrap::_meleeDamage;
		using FragTrap::_rangedDamage;
		using FragTrap::_armorDamage;

};

#endif