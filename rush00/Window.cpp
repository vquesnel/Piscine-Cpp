/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 15:14:14 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/13 15:14:53 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Window.hpp"

Window::Window(void)
{

}

Window::Window(Window const &instance)
{
  *this = instance;
  return;
}

Window::~Window(void)
{

}

Window const  &Window::operator=(Window const &rhs) {
  if (this != &rhs) {}

  return (*this);
}
