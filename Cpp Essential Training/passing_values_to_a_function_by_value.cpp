#include <cstdio>

using namespace std;

void func(int i)
{
    i=41;
    printf("The value is %d.\n",i);
}

int main()
{
    int i=20;
    printf("The value of i from main() is %d.\n",i);
    func(i);
    printf("The value of i from the main is %d",i); // i does not change ,it was passed only as a copy in the function of the line before

    return 0;
}