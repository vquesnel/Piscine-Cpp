/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 11/01/2018 18:18:54 by vquesnel          #+#    #+#             */
/*   Updated: 11/01/2018 18:18:54 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include "Victim.hpp"

class Sorcerer
{
	public:
    Sorcerer(void);
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const &copy);
		~Sorcerer(void);

    Sorcerer		  &operator=(Sorcerer const &rhs);
		std::string   getName(void)	const;
		std::string   getTitle(void)	const;
		void			    polymorph(Victim const &victim) const;
	protected:
		std::string		_name;
		std::string		_title;
};

std::ostream			&operator<<(std::ostream &o, Sorcerer const &rhs);

#endif //SORCERER_HPP
