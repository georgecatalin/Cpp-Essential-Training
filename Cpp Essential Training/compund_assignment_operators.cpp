#include <cstdio>

using namespace std;

int main()
{
    int x=42;
    int y=7;

    x+=y;
    printf("x is %d.\n",x);

    x-=y;
    printf("x is %d.\n",x);

    x*=y;
    printf("x is %d.\n",x);

    x/=y;
    printf("x is %d.\n",x);

    x%=y;
    printf("x is %d.\n",x);
}