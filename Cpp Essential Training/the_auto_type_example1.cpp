#include <cstdio>
#include <string>
#include <typeinfo>

using namespace std;

string func()
{
    return string("Hello, World");
}

int main()
{
    auto x=func();
    printf("x is %s.\n", x.c_str());

    if (typeid(x)==typeid(string))
    {
        puts("Yeah, it's a string");
    }
    

    return 0;
}