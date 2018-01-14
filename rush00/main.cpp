/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <mseinic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 12:54:50 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/14 14:49:07 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Window.hpp"

int main()
{
    Window win;
    start_color();
    init_color(COLOR_RED, 195, 24, 47);
    init_color(COLOR_BLUE, 0, 68, 255);
    init_color(COLOR_GREEN, 102, 204, 0);
    init_color(COLOR_MAGENTA, 102, 51, 0);
    init_color(COLOR_YELLOW, 255,246,120);
    init_color(COLOR_WHITE, 700, 700,700);
    init_pair(1, COLOR_RED, COLOR_WHITE);
    init_pair(2, COLOR_YELLOW, COLOR_WHITE);
    init_pair(3, COLOR_BLUE, COLOR_WHITE);
    init_pair(4, COLOR_GREEN, COLOR_WHITE);
    init_pair(5, COLOR_MAGENTA, COLOR_WHITE);
    win.play();
    return (0);
}
