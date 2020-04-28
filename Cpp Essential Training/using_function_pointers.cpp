#include <cstdio>

using namespace std;

void func()
{
    puts("This is from the func()");
}

int main()
{
    void (*ptrFunction) () =func;
    puts("This is from the main function");
    (*ptrFunction)();

    return 0;
}