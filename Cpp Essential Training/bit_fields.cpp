#include <cstdio>

using namespace std;

struct preferences
{
    bool likesMusic:1;
    bool hasHair:1;
    bool hasInternet:1;
    bool hasDinosaur:1;
    unsigned int numberOfChilder:4;
};

int main()
{
    preferences homer;
    homer.likesMusic=true;
    homer.hasHair=false;
    homer.hasInternet=true;
    homer.hasDinosaur=false;
    homer.numberOfChilder=3;

    printf("The size of int is %ld in bits.\n", sizeof(int)*8);
    printf("The size of structure homer is %ld in bits.\n",sizeof(homer)*8);

    return 0;
}