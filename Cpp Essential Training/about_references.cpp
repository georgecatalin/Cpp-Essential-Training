#include <cstdio>

using namespace std;

int main()
{
    int i=10;
    int & ireference =i;

    ireference=15;

    printf("i is %d.\n",i);

    return 0;
    
}