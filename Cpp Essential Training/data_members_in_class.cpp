#include <cstdio>

using namespace  std;

class C
{
public:
    int ia;
    int ib;
    int ic;
};

int main()
{
    C c={1,2,4};

    printf("The value of ia is %00d, the value of ib is %00d, the value of ic is %00d.\n",c.ia,c.ib,c.ic);

    return 0;
}