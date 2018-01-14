/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 15:14:14 by vquesnel          #+#    #+#             */
/*   Updated: 2018/01/14 14:49:49 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Window.hpp"

Window::Window(void) :
  player(Player()),
  input(ERR),
  lastInput(ERR),
  frameCount(0)
{
  init();
}

Window::Window(Window const &instance) :
  player(Player()),
  input(ERR),
  lastInput(ERR),
  frameCount(0)
{
  init();
  *this = instance;
  return;
}

Window::~Window(void)
{
  destroyWin();
  use_default_colors();
  endwin();
  std::cout << "YOU LOSE WANNA TRY AGAIN ?" << std::endl;

}

Window const  &Window::operator=(Window const &rhs)
{
  if (this != &rhs) {
    this->input = rhs.input;
  	this->lastInput = rhs.lastInput;
  	this->start = rhs.start;
		this->now = rhs.now;
  }
  	return *this;
}

Player            &Window::getPlayer(void)
{
  return this->player;
}

void	          Window::init(void)
{
  gettimeofday(&this->begin, NULL);
  initEnemy();
  initscr();
  initBullets();
  noecho();
  curs_set(false);
  timeout(0);
  cbreak();
  keypad(stdscr, true);
  gettimeofday(&start, NULL);
  refresh();
  createWin();
  printGame();
}

void             Window::initEnemy(void)
{
  for (int i = 0; i < 50; ++i) {
    if (this->enemies[i])
    this->enemies[i] = NULL;
  }
}

void	          Window::initBullets(void)
{
  for(int i = 0; i < 200; i++) {
    if (this->playerBullets[i])
      this->playerBullets[i] = NULL;
  }
  for(int i = 0; i < 400; i++) {
    if (this->enemyBullets[i])
      this->enemyBullets[i] = NULL;
  }
}

void            Window::createEnemy(int frameCount)
{
  if (frameCount % 20 == 0) {
    int y = (6 + rand() / (RAND_MAX / (23 - 6 + 1) + 1));
    for (int i = 0; i < 50; ++i) {
      if (!this->enemies[i]) {
          this->enemies[i] = new Enemy(WIDTH - 1, y);
          return;
      }
    }
  }
}

void	          Window::initEnemyBullets(void)
{
  for(int i = 0; i < 400; i++) {
    this->playerBullets[i] = new EnemyBullet();
  }
  return;
}

void	          Window::enemyShoot(int x, int y)
{
  for (int i = 0; i < 400; i++) {
    if(!this->enemyBullets[i]) {
      this->enemyBullets[i] = new EnemyBullet(x - 1, y);
      return;
    }
  }
  return;
}

void	           Window::initPlayerBullets(void)
{
  for(int i = 0; i < 200; i++) {
    this->playerBullets[i] = new PlayerBullet();
  }
  return;
}

void	            Window::playerShoot(int y)
{
  for (int i = 0; i < 200; i++) {
      if(!this->playerBullets[i]) {
        this->playerBullets[i] = new PlayerBullet(this->player.getX() + this->player.getForm().length(), y);
        return;
      }
  }
  return;
}

void	            Window::moveElements(int const input)
{
  player.move(input, this->frameCount);
  if (input == ' ') {
    this->playerShoot(this->player.getY());
  }
  for (int i = 0; i < 50; i++) {
    if (enemies[i]) {
      if (!enemies[i]->move(this->frameCount)) {
        delete enemies[i];
        enemies[i] = NULL;
      }
      else if (enemies[i] != NULL) {
        if ((rand() % 100) == 0) {
          this->enemyShoot(this->enemies[i]->getX(),
          this->enemies[i]->getY());
        }
      }
    }
  }
  for (int i = 0; i < 200; i++) {
    if (this->playerBullets[i]) {
      if (!this->playerBullets[i]->move(this->frameCount)){
        delete this->playerBullets[i];
        this->playerBullets[i] = NULL;
      }
    }
  }
  for (int i = 0; i < 400; ++i) {
    if (this->enemyBullets[i]) {
      if (!this->enemyBullets[i]->move(frameCount)) {
        delete this->enemyBullets[i];
        this->enemyBullets[i] = NULL;
      }
    }
  }
}

unsigned int 	  Window::timediff(timeval start, timeval now)
{
  return ((now.tv_sec * 1000000 + now.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec));
}

bool		          Window::handleCollision(void)
{
  for (int i = 0; i < 50; ++i) {
    if (this->enemies[i] && this->player.colision(this->enemies[i])) {
      this->getPlayer()._life--;
      delete this->enemies[i];
      this->enemies[i] = NULL;
      if (this->getPlayer()._life <= 0) {
        return false;
      }
    }
  }
  for (int i = 0; i < 400; ++i) {
    if (this->enemyBullets[i] && this->player.colision(this->enemyBullets[i])) {
      delete this->enemyBullets[i];
      this->enemyBullets[i] = NULL;
      this->getPlayer()._life--;
      if (this->getPlayer()._life <= 0)
          return false;
    }
  }
  for (int i = 0; i < 200; ++i) {
    for (int j = 0; (j < 50 && this->playerBullets[i]) ; ++j) {
      if (this->enemies[j] &&
         this->playerBullets[i]->colision(this->enemies[j])) {
        delete this->playerBullets[i];
        delete this->enemies[j];
        this->playerBullets[i] = NULL;
        this->enemies[j] = NULL;
        score += 1;
      }
    }
  }
  return true;
}

void    	Window::createWin(void)
{
    this->win = newwin(HEIGHT, WIDTH, START_Y, START_X);
    box(this->win,0,0);
    wrefresh(this->win);
}

void	Window::destroyWin(void)
{
  wrefresh(this->win);
  clear();
  refresh();
  delwin(this->win);
}

void Window::clearMyWin(void)
{
  attron(COLOR_PAIR(4));
  for (int i = START_Y + 1; i < HEIGHT + START_Y -1 ; i++) {
    for (int j = START_X +1 ; j < WIDTH + START_X -1; j++) {
      mvprintw(i, j, " ");
    }
  }
  attroff(COLOR_PAIR(4));
}

void Window::updateWin(void)
{
  box(this->win,0,0);
  clearMyWin();
  refresh();
}

void    Window::printGame()
{

    mvprintw(25, 5, "SCORE :");
    mvprintw(25, 14, "%d", this->score);
    mvprintw(4, 94, "LIFE :");
    mvprintw(4, 103, "%d", this->player._life);
    mvprintw(4, 5, "TIME : ");
    mvprintw(4, 14 , "%d", (timediff(this->begin, this->start) / 1000000));

    this->player.toPrint();
    for (int i = 0; i < 50; ++i) {
      if (this->enemies[i])
        this->enemies[i]->toPrint();
    }
    for (int i = 0; i < 200; ++i) {
      if (this->playerBullets[i])
        this->playerBullets[i]->toPrint();
    }
    for (int i = 0; i < 400; ++i) {
      if (this->enemyBullets[i])
        this->enemyBullets[i]->toPrint();
    }
}

void	Window::play(void)
{
  this->score = 0;
  this->input = getch();
  while (this->input != 27) {
      this->input = getch();
      if (this->input != ERR) {
          this->lastInput = this->input;
      }
      gettimeofday(&this->now, NULL);
      if (timediff(this->start, this->now) >= (1000000 / FRAME)) {
          this->updateWin();
          this->createEnemy(this->frameCount);
          this->moveElements(this->lastInput);
          this->printGame();
          if (!this->handleCollision()) {
              return;
            }
          this->lastInput = ERR;
          this->start = this->now;
          this->frameCount++;
      }
  }
}
