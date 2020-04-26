#include <cstdio>

using namespace std;

typedef unsigned char points_t;
typedef unsigned char rank_t;

struct score
{
    points_t p;
    rank_t r;
};

int main()
{
    score s;
    s = {5, 9};

    printf("score is points %d  and %d rank.\n", s.p, s.r);

    return 0;
}