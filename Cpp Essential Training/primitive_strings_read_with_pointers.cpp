#include <cstdio>

using namespace std;

int main()
{
    char s[]="String";
    printf("The string is %s \n",s);

    for (char *sptr = s; *sptr !='\0'; sptr++)
    {
        printf("The character is %c \n", *sptr );
    }
    
    return 0;
}