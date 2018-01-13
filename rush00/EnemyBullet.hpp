#ifndef ENEMYBULLET_HPP
# define ENEMYBULLET_HPP

# include <iostream>

class EnemyBullet {
  public:
    EnemyBullet(void);
    EnemyBullet(EnemyBullet const &instance);
    ~EnemyBullet(void);

    EnemyBullet    &operator=(EnemyBullet const &rhs);
  protected:
  private:
};

#endif
