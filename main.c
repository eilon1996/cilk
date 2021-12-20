/* hello.cilk */
#include <stdio.h>

void hello()
{
    printf("hello world\n");
}

int cilk_main()
{
    cilk_spawn hello();
    cilk_spawn hello();
    cilk_sync;
    return 0;
}