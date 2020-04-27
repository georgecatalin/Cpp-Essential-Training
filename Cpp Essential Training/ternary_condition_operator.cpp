#include <cstdio>


using namespace std;

int main()
{
    int x=7;
    int y=45;

    const char * str= x>y ? "true" : "false";

    puts(str);

    return 0;
}