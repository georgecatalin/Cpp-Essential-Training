#include <cstdio>

using namespace  std;

int main()
{
    int x=0;

    printf("x is %d.\n", ++x); //prefix increment operator -- execute before closing the statement
    printf("x is %d.\n", ++x);
    printf("x is %d.\n", ++x);

    x=0;
    printf("x is %d.\n", x++); //postfix increment operator -- execute after closing the statement
    printf("x is %d.\n", x++);
    printf("x is %d.\n", x++);

    return 0;
}
