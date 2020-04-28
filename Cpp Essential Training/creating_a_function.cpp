#include <cstdio>

using namespace std;

void func()
{
    puts("This is from the func()");
}


int main()
{
    puts("This is from the main.");
    func();
    return 0;
}