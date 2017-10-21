gcc -c add.c
gcc -c sub.c

ar -cr libaddsub.a add.o sub.o

gcc -o main main.c -L. -laddsub
