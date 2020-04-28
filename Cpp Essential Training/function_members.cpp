#include <cstdio>

using namespace std;

class C
{
private:
    int ia = 0;

public:
    void setValue(int i);
    int getValue();
    int getValue() const;
};

void C::setValue(int i)
{
    ia = i;
}

int C::getValue()
{
    return ++ia;
}

int C::getValue() const
{
    return ia;
}

int main()
{
    int i = 47;

    C object1;
    object1.setValue(i);
    printf("The value of i is %d.\n", object1.getValue());

    const C object2;
    printf("The value of i is %d.\n", object2.getValue());

    return 0;
}