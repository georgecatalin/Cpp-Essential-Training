#include <cstdio>

using namespace std;

int main()
{
    float f;
    double df;
    long double ldf;

    constexpr size_t byte=8;

    printf("The size of float is %ld.\n", sizeof(f)*byte);
    printf("The size of double is %ld.\n",sizeof(df)*byte);
    printf("The size of long double is %ld.\n", sizeof(ldf)*byte);

    df=.1+.1+.1;

    if (df==.3)
    {
        puts("True");
    }
    else
    {
        puts("False");
    }
    
    printf("df is %1.20lf.\n",df);

    return 0;
    
}