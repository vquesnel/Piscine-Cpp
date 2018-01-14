/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:51:25 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/14 12:31:19 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WINDOW_HPP
# define WINDOW_HPP

#define HEIGHT 20
#define WIDTH 100
#define START_X 5
#define START_Y 5
#define FRAME 27

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
	  void	createWin(void);
    void	destroyWin(void);
    void	play(void);
    void  clearMyWin(void);
    void  updateWin(void);

  private:
    AEnv*           enemies[50];
    AEnv*           playerBullets[200];
    AEnv*           enemyBullets[400];
    Player		      player;
    int				      input;
    int				      lastInput;
    int 			      score;
    unsigned long	  frameCount;
    struct timeval  start;
    struct timeval  begin;
    struct timeval	now;
    WINDOW*         win;
    void	          init(void);
    Player          &getPlayer(void);
    void	          printGame(void);
    void	          initEnemy(void);
    void            initBullets(void);
    void	          initPlayerBullets(void);
    void	          initEnemyBullets(void);
    void	          playerShoot(int y);
    void	          enemyShoot(int x, int y);
    void	          createEnemy(int frameCount);
    void	          moveElements(int const input);
    unsigned int 	  timediff(timeval start, timeval now);
    bool		        handleCollision(void);
};

#endif
