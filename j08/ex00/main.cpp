/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 12:55:06 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/18 13:27:54 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>

int main() {
  std::list<int> intList;

  intList.push_back(0);
  intList.push_back(3);
  intList.push_back(1243254);
  intList.push_back(3);
  intList.push_back(2323);
  intList.push_back(-21);
  intList.push_back(42);
  intList.push_back(1243);

  try {
    std::cout << easyfind(intList, 15) << std::endl;
  }
  catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  try {
    std::cout << easyfind(intList, 3) << std::endl;
  }
  catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << "---------------------------------" << std::endl;
  std::vector<int>  intVector;

  intVector.push_back(0);
  intVector.push_back(3);
  intVector.push_back(1243254);
  intVector.push_back(3);
  intVector.push_back(2323);
  intVector.push_back(-21);
  intVector.push_back(42);
  intVector.push_back(1243);
  try {
    std::cout << easyfind(intVector, -21) << std::endl;
  }
  catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  try {
    std::cout << easyfind(intVector, 1243254) << std::endl;
  }
  catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  try {
    std::cout << easyfind(intVector, -0) << std::endl;
  }
  catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  try {
    std::cout << easyfind(intVector, -10) << std::endl;
  }
  catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  return 0;
}
