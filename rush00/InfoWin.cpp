/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InfoWin.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 13:22:02 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/13 13:32:16 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "InfoWin.hpp"

InfoWin::InfoWin(void):
    Window()
{
    return;
}

InfoWin::InfoWin(int height, int width, int posx, int posy):
    Window(height, width, posx, posy)
{
    return;
}

InfoWin::~InfoWin(void)
{
    return;
}
