#include <cstdio>

using namespace std;

void func()
{
    int i=42; //this is an auto variable which is saved on the stack for the sake of speed in processing. Although only small values are handled in the stack
    printf("The value of i is %d.\n",i);
}

int main()
{
    int i=20;
    printf("The value of i from the main is %d.\n",i);
    func();
    func();
    func();

    return 0;
}


