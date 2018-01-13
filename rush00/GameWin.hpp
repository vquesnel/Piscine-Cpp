/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameWin.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 13:18:06 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/13 13:28:33 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAMEWIN_H
#define GAMEWIN_H
#include "Window.hpp"

class GameWin: public Window
{
    public:
        GameWin(void);
        GameWin(int height, int width, int posx, int posy);
        ~GameWin(void);
};

#endif
