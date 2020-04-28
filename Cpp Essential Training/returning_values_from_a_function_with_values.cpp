#include <cstdio>

using namespace std;

int func(int i)
{
    puts("This is from the func()");
    int x;
    x=i*2;
    printf("The value x is %d.\n",x);

    return x;
}

int main()
{
    int i;
    puts("This is from the main function");
    i=func(10);
    printf("The value of x is %d.\n",i);

    return 0;
}