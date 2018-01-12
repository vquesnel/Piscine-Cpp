/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 09:14:39 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 10:57:15 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
  public:
    PowerFist(void);
    PowerFist(PowerFist const &instance);
    ~PowerFist(void);

    PowerFist &operator=(PowerFist const &rhs);
    void  attack(void) const;
  protected:
  private:
};

#endif