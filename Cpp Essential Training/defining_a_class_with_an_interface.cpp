#include <cstdio>

using namespace std;

class class1
{
private:
    int i=10;
public:
    void setValue(int value);
    int getValue();
};

void class1::setValue(int value)
{
    i=value;
}

int class1::getValue()
{
    return i;
}

int main()
{
    int i=42;

    class1 object1;
    object1.setValue(36);

    printf("The value is %d.\n",object1.getValue());

    return 0;
}