#include "player_proxy.h"
#include <iostream>
using namespace std;

ProxyPlayerVip1::ProxyPlayerVip1()
{
  mPlayer = new Player();  
}

void ProxyPlayerVip1::play1()
{
  mPlayer->play1();
}

void ProxyPlayerVip1::play2()
{
  cout << "没有权限\n" << endl;
}

void ProxyPlayerVip1::play3()
{
  cout << "没有权限\n" << endl;
}

ProxyPlayerVip2::ProxyPlayerVip2()
{
  mPlayer = new Player();  
}

void ProxyPlayerVip2::play1()
{
  mPlayer->play1();
}

void ProxyPlayerVip2::play2()
{
  mPlayer->play2();
}

void ProxyPlayerVip2::play3()
{
  cout << "没有权限\n" << endl;
}
