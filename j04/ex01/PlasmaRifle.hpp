/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 09:14:42 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 10:57:15 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
  public:
    PlasmaRifle(void);
    PlasmaRifle(PlasmaRifle const &instance);
    ~PlasmaRifle(void);

    PlasmaRifle &operator=(PlasmaRifle const &rhs);
    void  attack(void) const;
  protected:
  private:
};

#endif