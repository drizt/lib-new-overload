#include "lib.h"

#include <cstdio>
#include <cstdlib>  

void func(A *a)
{
    std::printf("library delete called, pointer = 0x%p\n", a);
    delete a;
}