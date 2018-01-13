/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 12:40:06 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/13 14:56:53 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Window.hpp"


Window::Window(void)
{
    return;
}

Window::Window(int height, int width, int posx, int posy)
{
    std::cout << "Window constructor called." << std::endl;
    this->_win = newwin(height, width, posy, posx);
    return;
}

WINDOW* Window::getWin(void)
{
    return(this->_win);
}


Window::~Window(void)
{
    std::cout << "Window destructor called." << std::endl;
    delwin(this->_win);
    return;
}
