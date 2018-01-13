#ifndef PLAYERBULLET_HPP
# define PLAYERBULLET_HPP

# include <iostream>

class PlayerBullet {
  public:
    PlayerBullet(void);
    PlayerBullet(PlayerBullet const &instance);
    ~PlayerBullet(void);

    PlayerBullet    &operator=(PlayerBullet const &rhs);
  protected:
  private:
};

#endif
