#include <cstdio>

using namespace std;

void printPointer(char * ptr)
{
    printf("The pointer is %p and the its value is %c. \n", ptr,*ptr);
}

int main()
{
    char myArray[]={1,2,3,4,5,6,7,8,9};
    char * p;
    p=myArray;

   printPointer(p++);
   printPointer(p++);
   printPointer(p++);

   return 0;
}