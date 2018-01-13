/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:51:25 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/13 15:14:15 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WINDOW_HPP
# define WINDOW_HPP

#define WINHEIGHT 20
#define WINWIDTH 100
#define PSTART_X 5
#define PSTART_Y 5

#include "AEnv.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include "ABullet.hpp"
#include "EnemyBullet.hpp"
# include "PlayerBullet.hpp"
#include <ncurses.h>
#include <sys/time.h>

class Window
{
  public:
	  Window();
	  Window(Window const &);
	  ~Window();

	  Window const &operator=(Window const &instance);
	  void	createWin();
    void	destroyWin();
    void	play();

  private:
    AEnv**          elements;
    AEnv**          playerBullets;
    AEnv**          enemyBullets;
    Player		      player;
    int				      input;
    int				      lastInput;
    int 			      score;
    unsigned long	  frameCount;
    struct timeval  start;
    struct timeval	now;
    WINDOW*         my_win;
    const int	    	HEIGHT;
    const int		    WIDTH;
    const int	      START_X;
    const int		    START_Y;
    void	          init(void);
    void	          printScreen(void);
    void	          initArray(void);
    void	          initEnemy(void);
    void	          initPlayerBullets(void);
    void	          initenemyBullets(void);
    void	          playerShoot(int y);
    void	          enemyShoot(int x, int y);
    void	          createEnemy(int frameCount);
    void	          moveElements(int const input);
    unsigned int 	  timediff(timeval t1, timeval t2);
    int		          collide(void);
};

#endif
