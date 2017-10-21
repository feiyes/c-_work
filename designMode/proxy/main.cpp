#include "player_proxy.h"

int main()
{
  ProxyPlayerVip1 player1;
  player1.play1();
  player1.play2();
  player1.play3();
  
  ProxyPlayerVip2 player2;
  player2.play1();
  player2.play2();
  player2.play3();
  
  return 0;	
}
