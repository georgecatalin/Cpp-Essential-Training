#include <cstdio>

using namespace std;

void func();

int main()
{
    puts("This is from the main function");
    func();
    return 0;
}

void func()
{
    puts("This is from the func()");
}