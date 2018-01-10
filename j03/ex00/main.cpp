/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:39:11 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/10 12:35:13 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap f1;
  FragTrap f2("NOOD");
  FragTrap f3(f2);

  std::cout << "---------------------------------------------" << std::endl;
	while (f1.getHitPoints() > 0) {
		f1.beRepaired(5);
		f1.takeDamage(50);
		f1.meleeAttack("Blightbot");
		f1.rangedAttack("Holobot");
		f1.vaulthunter_dot_exe("Miniontrap");
		std::cout << std::endl;
	}
  std::cout << "---------------------------------------------" << std::endl;
	while (f2.getHitPoints() > 0) {
	   f2.beRepaired(2);
	   f2.takeDamage(25);
     f2.meleeAttack("Punkbot");
	   f2.vaulthunter_dot_exe("Holobot");
	   std::cout << std::endl;
	 }
   std::cout << "---------------------------------------------" <<std::endl;
   while (f3.getHitPoints() > 0) {
 	   f3.beRepaired(4);
 	   f3.takeDamage(35);
 	   f3.vaulthunter_dot_exe("Claptrap");
 	   std::cout << std::endl;
 	 }
   std::cout << "---------------------------------------------" <<std::endl;
   return (0);
}