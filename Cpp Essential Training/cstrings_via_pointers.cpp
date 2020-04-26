#include <cstdio>

using namespace std;

int main()
{
    const char * string="Hello";
    string="Changed value" ",it is incredible"; //the pointer points to the memory that hold string value. Hence string can be change, pointer will still address it
    printf("The string is %s.\n", string);

    for (int i = 0; i < string[i]; i++)
    {
        printf("%02d: %c.\n",i,string[i]);
    }
    
    return 0;
}