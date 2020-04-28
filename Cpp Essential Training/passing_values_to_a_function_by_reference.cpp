#include <cstdio>

using namespace std;

void func(int & i)
{
    i=41;
    printf("The value is %d.\n",i);
}

/* ** protect the reference as a function parameter by using const * **/

/* ***

void func(const int & i)
{
    i=41;
    printf("The value of i in the func() is %d.\n",i);
}

*** */





int main()
{
    int i=20;
    printf("The value of i from main() is %d.\n",i);
    func(i);
    printf("The value of i from the main is %d",i); // i does  change ,it was as reference(alias) of the original in the function of the line before

    return 0;
}