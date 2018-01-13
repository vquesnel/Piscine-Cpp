/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 12:40:25 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/13 15:09:56 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WINDOW_H
#define WINDOW_H
#include <ncurses.h>
#include <iostream>

class Window
{
    public:
        Window(void);
        Window(int height, int width, int posx, int posy);
        ~Window(void);
        WINDOW    *getWin(void);

    protected:
        WINDOW *_win;
};

#endif
