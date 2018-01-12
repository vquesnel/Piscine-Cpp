/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 18:56:57 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 08:07:13 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main() {

  std::cout << "robert = ";
  Sorcerer robert("Robert", "the Magnificent");
  std::cout << "ben = ";
  Victim *ben = new Peon();
  std::cout << "benJr = ";
  Victim benJr(*ben);

  std::cout << std::endl << "ben will be polymorph like a Peon" << std::endl
  << *ben;
  robert.polymorph(*ben);
  std::cout << std::endl << "benJr will be polymorph like a Peon" <<
  std::endl << benJr;
  robert.polymorph(benJr);
  std::cout << std::endl <<
  "---------------- Main Test ------------------" << std::endl;

  Victim jim("Jimmy");
  Peon joe("Joe");

  std::cout << robert << jim << joe;
  robert.polymorph(jim);
  robert.polymorph(joe);

  std::cout << " -----------------------------------" << std::endl << std::endl
  << "assign joe to jim so jim becomes a Peon" << std::endl;
  jim = joe;
  std::cout << jim;
  robert.polymorph(jim);
  std::cout << std::endl;
  delete ben;
  return 0;
}
