#include <cstdio>

using namespace std;

int main()
{
    int iarray[]={1,2,3,4,5};
    int i=0;

    while (i<5)
    {
        if (i==3)
        {
            i++;
            continue; //execution goes to the beginning of the while block, so i gets equal to 4...
        }

        printf("The element %d is %d.\n",i,iarray[i]);
        i++;
    }
    puts("End of program");

    return 0;
}