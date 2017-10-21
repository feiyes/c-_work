#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

#define LIB_CACULATE_PATH "./libcaculate.so"

typedef int(*CAC_FUNC)(int, int);

int main()
{
  void *handle;
  char *error;
  CAC_FUNC cac_func = NULL;

  handle = dlopen(LIB_CACULATE_PATH, RTLD_LAZY);
  if (!handle)
  {
    fprintf(stderr, "%s\n", dlerror());
    exit(EXIT_FAILURE);
  }

  dlerror();

  *(void **)(&cac_func) = dlsym(handle, "add");
  if ((error = dlerror()) != NULL)
  {
    fprintf(stderr,"%s\n",error);
    exit(EXIT_FAILURE);
  }
  printf("add:%d\n", cac_func(2,7));

  *(void **)(&cac_func) = dlsym(handle, "sub");
  printf("sub:%d\n", cac_func(2,7));

  *(void **)(&cac_func) = dlsym(handle, "mul");
  printf("mul:%d\n", cac_func(2,7));

  *(void **)(&cac_func) = dlsym(handle, "div");
  printf("div:%d\n", cac_func(2,7));

  dlclose(handle);
  exit(EXIT_SUCCESS);
}
