/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 10:14:18 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/08 11:43:20 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstdlib>

class Zombie {
  public:
    Zombie(std::string name, std::string type);
    ~Zombie(void);
    std::string type;
    std::string name;
    void announce(void) const;
};

#endif