/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 14:23:04 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/07 14:56:49 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
#define PONY_H

#include <iostream>

class Pony
{
   public:
      Pony(int age, int weight, int height, int del);
      ~Pony(void);
      int getDelete(void) const;
      int age;
      int weight;
      int height;
   private:
      int _delete;
};

#endif
