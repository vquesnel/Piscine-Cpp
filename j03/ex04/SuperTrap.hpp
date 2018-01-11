/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 17:51:49 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/11 14:34:37 by vquesnel         ###   ########.fr       */
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
};

#endif