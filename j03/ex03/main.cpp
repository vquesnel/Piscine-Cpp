/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:39:11 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 11:50:37 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap f1;
  FragTrap f2("Robot");
  FragTrap f3(f2);
	ScavTrap s1;
	ScavTrap s2("Human");
	ScavTrap s3(s2);
	NinjaTrap n1;
	NinjaTrap n2("NinjaMan");
	NinjaTrap n3(n2);




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
	  while (s1.getHitPoints() > 0) {
	 	  s1.beRepaired(5);
	 	 s1.takeDamage(50);
	   	 s1.meleeAttack("Blightbot");
	 	  s1.rangedAttack("Holobot");
	 	  s1.challengeNewcomer("Miniontrap");
	 	 std::cout << std::endl;
	 }
	 std::cout << "---------------------------------------------" << std::endl;
	 while (s2.getHitPoints() > 0) {
	 	  s2.beRepaired(2);
	 	 s2.takeDamage(25);
	 	  s2.meleeAttack("Punkbot");
	 	  s2.challengeNewcomer("Holobot");
	 	 std::cout << std::endl;
	  }
	  std::cout << "---------------------------------------------" <<std::endl;
	  while (s3.getHitPoints() > 0) {
	 	  s3.beRepaired(4);
	 	 s3.takeDamage(35);
	 	  s3.challengeNewcomer("Claptrap");
	 	 std::cout << std::endl;
	  }
	 	std::cout << "---------------------------------------------" <<std::endl;
		while (n2.getHitPoints() > 0) {
			n2.beRepaired(2);
			n2.takeDamage(60);
			n2.meleeAttack("Blightbot");
			n2.rangedAttack("Holobot");
			n2.ninjaShoebox(f1);
			n2.ninjaShoebox(s1);
			n2.ninjaShoebox(n1);
			std::cout << std::endl;
		}
   return (0);
}