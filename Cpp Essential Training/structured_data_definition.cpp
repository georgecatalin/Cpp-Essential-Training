#include <cstdio>

using namespace std;

struct Employee
{
    int id;
    const char *name;
    const 
    ./schar *role;
};

int main()
{
    Employee joe = {42, "Joe Maxon", "Leader"};

    printf("%s had the role of %s and the id of %d.\n",
           joe.name, joe.role, joe.id);

    return 0;
}