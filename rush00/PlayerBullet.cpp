#include "PlayerBullet.hpp"

PlayerBullet::PlayerBullet(void)
{

}

PlayerBullet::PlayerBullet(PlayerBullet const &instance)
{
  *this = instance;
  return;
}

PlayerBullet::~PlayerBullet(void)
{

}

PlayerBullet    &PlayerBullet::operator=(PlayerBullet const &rhs) {
  if (this != &rhs) {}

  return (*this);
}
