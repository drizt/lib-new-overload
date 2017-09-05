#include "lib.h"

#include <cstdio>
#include <cstdlib>

// replacement of a minimal set of functions:
void *operator new(std::size_t sz)
{
    void *ptr = std::malloc(sz);
    std::printf("global op new called, size = %zu, pointer = 0x%p\n", sz, ptr);
    return ptr;
}

void operator delete(void* ptr) noexcept
{
    std::printf("global op delete called, pointer = 0x%p\n", ptr);
    std::free(ptr);
}

int main()
{
    A *a = new A();
    A *b = new A();
    func(a);
    delete b;
    return 0;
}