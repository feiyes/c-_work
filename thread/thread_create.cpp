#include <stdio.h>
#include <pthread.h>

void *thread1(void *arg)
{
  char *name = static_cast<char*>(arg);
  printf("name from main function is %s\n", name);
}

void *thread2(void *arg)
{
  int i = *static_cast<int *>(arg);
  printf("%d\n",i);
  for (int j=0;j<i;j++)
  {
    printf("%d ", j);
  }
  printf("\n");
}

int main()
{
  pthread_t id1, id2;
  int ret;
  char *name = "hello";
  ret = pthread_create(&id1,NULL,thread1,(void*)name);
  if (ret)
  {
    printf("create thread failed\n");
    return 1;
  }

  int i = 8;
  ret = pthread_create(&id2,NULL,thread2,(void*)&i);
  if (ret)
  {
    printf("create thread failed\n");
    return 1;
  }

  pthread_join(id1,NULL);
  pthread_join(id2,NULL);

  return 0;
}
