/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Piou.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 16:57:15 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 16:57:33 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIOU_HPP
# define PIOU_HPP

# include "Victim.hpp"

class Piou : public Victim
{
	public:
		Piou(std::string name = "Dark Maul");
		Piou(Piou const &copy);
		~Piou(void);

		void			getPolymorphed(void) const;
	protected:
};

#endif
