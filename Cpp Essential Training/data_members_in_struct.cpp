#include <cstdio>

using namespace std;

struct A
{
    // In a struct, all data members are public by default. Classes in C++ originate from structs in C.

    int ia;
    int ib;
    int ic;
};

int main()
{
    A a={1,2,3};

    printf("The value of ia is %d, the value of ib is %d, the value of ic is %d.\n",a.ia,a.ib,a.ic);

    return 0;
}