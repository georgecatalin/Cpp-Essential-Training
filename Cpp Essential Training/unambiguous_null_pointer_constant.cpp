#include <cstdio>

using namespace std;

void func(int i)
{
    printf("The integer is %d. \n", i);
}

void func(const char * s)
{
    printf("The address of the string is %p. \n",s);
}

int main()
{
    func(nullptr); // introduced in C++ 11 , unlike C to specify which kind of null it is referring to
    return 0;
}