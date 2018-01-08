/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 14:51:11 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/08 15:18:04 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>

class Human {
  private:
    void meleeAttack(std::string const& target);
    void rangedAttack(std::string const & target);
    void intimidatingShout(std::string const & target);
  public:
    void action(std::string const & action_name, std::string const & target);
    Human(void);
    ~Human(void);
};

#endif