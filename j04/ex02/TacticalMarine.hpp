/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 14:20:56 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 16:40:44 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
  public:
    TacticalMarine(void);
    TacticalMarine(TacticalMarine const &instance);
    ~TacticalMarine(void);

    TacticalMarine      &operator=(TacticalMarine const &rhs);
    ISpaceMarine        *clone(void) const;
    void                battleCry(void) const;
    void                rangedAttack(void) const;
    void                meleeAttack(void) const;
};

#endif