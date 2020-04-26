#include <cstdio>

using namespace std;

int main()
{
    int iarray[]={1,2,3,4,5};
    int i=0;

    do
    {
        printf("The element %d is %d. \n",i,iarray[i]);
        i++;
    } while (i<5);
    
    return 0;
}