/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 14:51:06 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/10 14:14:28 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {}

Human::~Human(void) {}

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "Use melee attack on " + target << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "Use ranged attack on " + target << std::endl;

}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "SHOUTING ON " + target << std::endl;
}

void  Human::action(std::string const &action_name, std::string const &target) {

  std::string actionsNames[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
  typedef void  (Human::*HumanFn)(std::string const & target);

  HumanFn actions[] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
  for ( int i = 0; i < 3; i++) {
    if (actionsNames[i] == action_name) {
      (this->*(actions[i]))(target);
      break;
    }
  }
}
