/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 14:20:53 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 16:02:22 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"

class Squad : public ISquad {
  public:
    Squad(void);
    Squad(Squad const &instance);
    ~Squad(void);

    Squad         &operator=(Squad const &rhs);
    int           getCount(void) const;
    ISpaceMarine* getUnit(int n) const;
    int           push(ISpaceMarine *unit);
  protected:
    int           _count;
    ISpaceMarine  **_units;
};

#endif