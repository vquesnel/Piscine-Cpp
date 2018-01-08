/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:06:51 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/08 13:14:45 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
  public:
    Weapon(std::string type);
    ~Weapon(void);
    std::string const &getType(void) const;
    std::string type;
    void  setType(std::string type);
};

#endif