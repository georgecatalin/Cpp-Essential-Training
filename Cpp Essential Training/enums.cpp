#include <cstdio>
#include <cstdint>

enum daysOfTheWeek : uint8_t
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

enum monthsOfSummer : uint8_t
{
    June=6,
    Jul=7,
    August=8
};

int main()
{
    printf("The day of the week is %d", Monday);

    return 0;
}