/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:35:38 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/08 13:00:38 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main(void) {
  Human bob;

  std::cout << bob.identify() << std::endl;
  std::cout << bob.getBrain().identify() << std::endl;
  return 0;
}