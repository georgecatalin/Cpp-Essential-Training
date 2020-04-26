#include <cstdio>
#include <cstdint>

using namespace std;

union ipv4 //use unions when two pieces of data share the same memory address
{
    uint32_t number;
    struct 
    {
        uint8_t a;
        uint8_t b;
        uint8_t c;
        uint8_t d;
    } octet;
};


int main()
{
    union ipv4 myAddress;

    myAddress.octet={192,168,56,22};

    printf("%d %d %d %d is the same as %08xd.\n",
         myAddress.octet.a,
         myAddress.octet.b,
         myAddress.octet.c,
         myAddress.octet.c,
         myAddress.number );
    return 0;
}