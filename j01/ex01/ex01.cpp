/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 15:06:28 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/07 15:07:40 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak() {
   std::string*        panthere = new std::string("String panthere");
   std::cout << *panthere << std::endl;
   delete panthere;
}
