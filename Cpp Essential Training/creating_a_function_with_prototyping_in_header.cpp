#include <cstdio>
#include "creating_a_function.h"

using namespace std;

int main()
{
    puts("This is from the main");
    func();
    return 0;
}

void func()
{
    puts("This is from the func");
}