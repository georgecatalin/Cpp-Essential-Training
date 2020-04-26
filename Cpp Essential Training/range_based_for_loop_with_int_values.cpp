#include <cstdio>

using namespace std;

int main()
{
    int iarray[]={1,2,3,4,5,6,7};

    for (int i : iarray)
    {
        printf("i is %d. \n",i);
    }
    
    return 0;
}