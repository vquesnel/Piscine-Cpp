/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 09:14:32 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 10:10:19 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy {
  public:
    SuperMutant(void);
    SuperMutant(SuperMutant const &instance);
    ~SuperMutant(void);

    SuperMutant			 &operator=(SuperMutant const &rhs);
    virtual void     takeDamage(int);
};

#endif