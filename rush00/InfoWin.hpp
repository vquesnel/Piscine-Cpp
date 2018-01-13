/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InfoWin.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 13:26:22 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/13 13:28:57 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFOWIN_H
#define INFOWIN_H

#include "Window.hpp"

class InfoWin: public Window
{
    public:
        InfoWin(void);
        InfoWin(int height, int width, int posx, int posy);
        ~InfoWin(void);
};

#endif
