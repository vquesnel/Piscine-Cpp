/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 15:53:18 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 17:31:41 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main() {
  ISpaceMarine* bob = new TacticalMarine;
  ISpaceMarine* jim = new AssaultTerminator;
  ISquad* vlc = new Squad;

  ISpaceMarine* jimBis = jim->clone();

  std::cout << vlc->push(bob) << std::endl;
  std::cout << vlc->push(jim) << std::endl;
  std::cout << vlc->push(bob) << std::endl;
  std::cout << vlc->push(jimBis) << std::endl;
  for (int i = 0; i < vlc->getCount(); ++i)
  {
    ISpaceMarine* cur = vlc->getUnit(i);
    cur->battleCry();
    cur->rangedAttack();
    cur->meleeAttack();
  }
  delete vlc;
  return 0;
}