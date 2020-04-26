#include <cstdio>

using namespace std;

int main()
{
    int x=42;
    int y=56;

    if (x>y)
    {
        puts("x>y");
    }
    else if (y>12)
    {
        puts("y>12");
    }
    
    else
    {
        puts("x<y");
    }
    
    return 0; 
}