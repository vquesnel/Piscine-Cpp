/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 11/01/2018 18:36:52 by vquesnel          #+#    #+#             */
/*   Updated: 11/01/2018 18:36:52 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
	public:
		Victim(std::string name = "Voldemort");
		Victim(Victim const &copy);
		virtual ~Victim(void);

    Victim			  &operator=(Victim const &copy);
		std::string   getName(void)	const;
		virtual void  getPolymorphed(void) const;
	protected:
		std::string	 _name;
};

std::ostream			&operator<<(std::ostream &o, Victim const &rhs);

#endif
