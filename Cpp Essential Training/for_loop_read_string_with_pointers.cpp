/* *** This form of for loop is inherited from C language *** */

#include <cstdio>

using namespace std;

int main()
{
    char mystring[]="abcdefghijklmn";

    for (char * ptr = mystring ; *ptr; ptr++)  //while the value stored at the location of the pointer is non zero, the value of the logical expression *ptr is non zero, hence true. for loop stops when false
    {
        printf("char is %c .\n", *ptr);
    }

    return 0;
    

}
