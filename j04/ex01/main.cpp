/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 09:14:22 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/12 13:39:11 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main() {
  Character* zaz = new Character("zaz");
  Character victor;

  Enemy *b = new RadScorpion();
  Enemy *c = new SuperMutant();
  Enemy *d = new SuperMutant();
  AWeapon* pr = new PlasmaRifle();
  AWeapon* pf = new PowerFist();

    std::cout << *zaz;
    zaz->equip(pr);
    std::cout << *zaz;
    victor.attack(b);
    zaz->attack(b);
    zaz->equip(pf);
    zaz->attack(b);
    std::cout << *zaz;
    zaz->equip(pr);
    zaz->attack(b);
    zaz->attack(c);
    zaz->recoverAP();
    victor.equip(pr);
    std::cout << victor;
    victor.equip(pf);
    victor.attack(c);
    std::cout << victor;
    victor.equip(pr);
    std::cout << victor;
    victor.attack(c);
    std::cout << victor;
    victor.attack(c);
    std::cout << victor;
    victor.attack(d);
    std::cout << victor;
    victor.attack(d);
    std::cout << victor;

    victor.attack(d);
    std::cout << victor;
    victor.attack(d);
    std::cout << victor;
    victor.attack(d);
    victor.recoverAP();
    victor.recoverAP();
    victor.recoverAP();
    std::cout << victor;
    victor.recoverAP();
    victor.recoverAP();
    victor.recoverAP();
    std::cout << victor;
    victor.attack(c);
    victor.attack(c);
    victor.attack(c);
    victor.attack(c);
    delete zaz;
    delete pr;
    delete pf;
  return 0;
}