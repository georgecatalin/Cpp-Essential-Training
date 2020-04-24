#include <cstdio>

using namespace std;

int main()
{
    int x=20;
    int y=36;
    int *ptr=&x;

    printf("x= %d\n",x);
    printf("y= %d\n",y);
    printf("The value corresponding to integer pointer =%d\n",*ptr);

    return 0;
}