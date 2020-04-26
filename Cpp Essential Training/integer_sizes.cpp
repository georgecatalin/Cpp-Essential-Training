#include <cstdio>

using namespace std;

int main()
{
    constexpr size_t byte=8;

    printf("The size of char is %ld. \n",sizeof(char) * byte);
    printf("The size of int is %ld. \n", sizeof(int) * byte);
    printf("The size of short int is %ld. \n",sizeof(short int) * byte);
    printf("The size of int is %ld. \n", sizeof(int)*byte);
    printf("The size of long int is %ld. \n",sizeof(long int) * byte);
    printf("The size of long long int is %ld. \n", sizeof(long long int) * byte);

    long x=100L;
    printf("The value of x is %ld.\n",x);

    return 0;
}