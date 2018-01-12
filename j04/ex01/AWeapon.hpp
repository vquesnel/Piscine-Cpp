/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 09:14:44 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 13:14:53 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
  public:
    AWeapon(void);
    AWeapon(std::string const &name, int apCost, int damage);
    AWeapon(AWeapon const &instance);
    virtual ~AWeapon(void);

    AWeapon            &operator=(AWeapon const &rhs);
    int                getAPCost(void) const;
    int                getDamage(void) const;
    std::string  const   &getName(void) const;
    virtual void       attack(void) const = 0;
  protected:
    std::string  _name;
    int         _apCost;
    int         _damage;
  private:
  ;
};

#endif