/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Screen.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 13:40:34 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/13 15:09:42 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Screen.hpp"
#include "GameWin.hpp"
#include "InfoWin.hpp"

Screen::Screen(void)
{
    std::cout << "Screen constructor called" << std::endl;
    initscr();
    noecho();
    this->_game = 1;
    return;
}

Screen::~Screen()
{ 
    endwin();
    std::cout << "Screen destructor called" << std::endl;
    return;
}

void    Screen::playGame(void)
{
    GameWin game(10,10,5,5);
    InfoWin info(3,3,1,1);
    int     c;

    
    std::cout << "Game starts" << std::endl;
    while (1)
    {
        getch();
        std::cout << game.getWin() << std::endl;
        //waddchstr(game.getWin(), "yolo");
        refresh();
    }
}
