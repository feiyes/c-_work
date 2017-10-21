#include "player.h"

class ProxyPlayerVip1:public Player
{
public:
  ProxyPlayerVip1();
  void play1();
  void play2();
  void play3();
private:
  Player *mPlayer;
};

class ProxyPlayerVip2:public Player
{
public:
  ProxyPlayerVip2();
  void play1();
  void play2();
  void play3();
private:
  Player *mPlayer;
};
