#include "EnemyBullet.hpp"

EnemyBullet::EnemyBullet(void)
{

}

EnemyBullet::EnemyBullet(EnemyBullet const &instance)
{
  *this = instance;
  return;
}

EnemyBullet::~EnemyBullet(void)
{

}

EnemyBullet    &EnemyBullet::operator=(EnemyBullet const &rhs) {
  if (this != &rhs) {}

  return (*this);
}
