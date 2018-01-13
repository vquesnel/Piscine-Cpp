
#include "PlayerBullet.hpp"

PlayerBullet::PlayerBullet(void) :
  AEnv(),
  ABullet()
{}

PlayerBullet::PlayerBullet(PlayerBullet const &instance) :
  AEnv(),
  ABullet(instance)
{
  *this = instance;
  return;
}

PlayerBullet::PlayerBullet(int x, int y) :
  AEnv(x, y),
  ABullet()
{}

PlayerBullet::~PlayerBullet(void) {}
