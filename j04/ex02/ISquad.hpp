/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 14:20:52 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 16:42:36 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

#include <iostream>
# include "ISpaceMarine.hpp"

class ISquad {
  public:
    virtual ~ISquad() {}
    virtual int getCount() const = 0;
    virtual ISpaceMarine* getUnit(int) const = 0;
    virtual int push(ISpaceMarine*) = 0;
};

#endif