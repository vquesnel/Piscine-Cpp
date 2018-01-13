/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Screen.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 13:38:14 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/13 14:35:18 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCREEN_H
#define SCREEN_H
#include <ncurses.h>
#include <iostream>

class   Screen
{
    public:
        Screen(void);
        ~Screen(void);
        void    playGame(void);
    
    private:
        int    _game;

};

#endif
