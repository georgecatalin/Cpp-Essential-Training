#include <cstdio>
#include <cstdint>

using namespace std;

int main()
{
    constexpr size_t BYTE=8;
    
    printf("The size of uint8_tis %ld.\n",sizeof(uint8_t)*BYTE);
    printf("The size of uint16_t is %ld.\n", sizeof(uint16_t)*BYTE);
    printf("The size of uint32_t is %ld.\n", sizeof(uint32_t)*BYTE);

    printf("The value of int8_t is %ld.\n", sizeof(int8_t)*BYTE);
    printf("The value of int16_t is %ld.\n", sizeof(int16_t)*BYTE);
    printf("The value of int32_t is %ld.\n", sizeof(int32_t)*BYTE);

    return 0;
}