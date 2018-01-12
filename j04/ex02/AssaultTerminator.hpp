/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 14:20:48 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 16:00:30 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
  public:
    AssaultTerminator(void);
    AssaultTerminator(AssaultTerminator const &instance);
    ~AssaultTerminator(void);

    AssaultTerminator     &operator=(AssaultTerminator const &rhs);
    ISpaceMarine          *clone(void) const;
    void                  battleCry(void) const;
    void                  rangedAttack(void) const;
    void                  meleeAttack(void) const;
};

#endif