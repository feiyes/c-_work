#include <stdio.h>
#include "add.h"
#include "sub.h"

int main()
{
  int a,b;

  a = add(1,2);
  printf("a=%d\n",a);

  b = sub(1,2);
  printf("b=%d\n",b);
  
  return 0;
}
