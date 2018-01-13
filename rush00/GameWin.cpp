/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameWin.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 13:22:02 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/13 13:32:01 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GameWin.hpp"

GameWin::GameWin(void):
    Window()
{
    return;
}

GameWin::GameWin(int height, int width, int posx, int posy):
    Window(height, width, posx, posy)
{
    return;
}

GameWin::~GameWin(void)
{
    return;
}
