采用dlopen, dlsym, dlclose加载动态链接库
１．生产动态链接库
gcc -fPIC -shared hello.c -o libhello.so

２．打开动态链接库
#include <dlfcn.h>
void *dlopen(const char*filename, int flag)
RTLD_LAZY, RTLD_NOW
如handle = dlopen("./libcaculate.so", RTLD_LAZY);

３．获取动态链接库里的函数
void *dlsym(void* handle, const char* symbol);
cac_func = (CAC_FUNC)dlsym(handle,"add");

４．关闭动态链接库
dlclose(handle);

５．编译选项
gcc -rdynamic -o main main.c -ldl
