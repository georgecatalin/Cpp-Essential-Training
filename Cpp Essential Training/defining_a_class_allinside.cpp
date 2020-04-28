#include <cstdio>

using namespace std;

class C1
{
    private:
        int i=0;
    public:
        void setValue(int value) {i=value;};
        int getValue(){ return i;};
};

int main()
{ 
    int i=3;

    C1 object1;
    object1.setValue(10);
    printf("The data member i of the Class C1 is %d.\n",object1.getValue());

    return 0;

}