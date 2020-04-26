#include <cstdio>

using namespace std;

int main()
{
    char string[]="abcdefghijklmn";
    puts(string);

    for (unsigned int i = 0; string[i]; i++)
    {
        printf("The value is %c.\n",string[i]);
    }
    
    return 0;
}