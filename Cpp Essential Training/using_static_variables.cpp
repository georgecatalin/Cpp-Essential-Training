#include <cstdio>

using namespace std;

void func()
{
    int static i=5;
    printf("The value of i is %d.\n",++i);
}

int main()
{
    int i=20;

    printf("The value of i from the main() is %d.\n",i);
    func();
    func();
    func();

    return 0;
}