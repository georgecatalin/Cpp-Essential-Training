#include <cstdio>

using namespace std;

int main()
{
    int iarray[]={1,2,3,4,5};
    int i=0;

    while (i<5)
    {
        printf("The element %d is %d.\n",i,iarray[i]);
        i++;
    }
    
    return 0;
}