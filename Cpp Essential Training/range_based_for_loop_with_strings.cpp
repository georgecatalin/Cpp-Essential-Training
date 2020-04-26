#include <cstdio>

using namespace std;

int main()
{
    char mystring[]="abcdefghiklm";

    for (char c: mystring)
    {
        if (c=='\0')
        {
            break;
        }
        
        printf("The char is %c.\n",c);
    }
    
}