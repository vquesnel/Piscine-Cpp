/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:38:41 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/08 13:00:08 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"


class Human {
  public:
    Human(void);
    ~Human(void);
    Brain const   selfBrain;
    std::string		identify(void) const;
    Brain const   &getBrain(void);
};

#endif