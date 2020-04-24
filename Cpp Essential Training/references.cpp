#include <cstdio>

using namespace std;

int main()
{
    int x=7;
    int *ptr=&x;

    int &y=x;
    //x=10;


    printf("x= %d\n",x);
    printf("value behind ptr is %d\n", *ptr);
    printf("y= %d\n",y);

    return 0;
}