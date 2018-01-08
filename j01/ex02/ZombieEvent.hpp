/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 10:14:13 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/08 11:42:11 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <cstdlib>
# include "Zombie.hpp"

class ZombieEvent {
  public:
    ZombieEvent(void);
    ~ZombieEvent(void);
    std::string zombieType;
    void setZombieType(std::string type);
    Zombie      *newZombie(std::string name);
    Zombie      *randomChump(void);
};

#endif