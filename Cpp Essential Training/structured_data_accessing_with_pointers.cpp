#include <cstdio>

using namespace std;

struct Employee
{
    int id;
    const char * name;
    const char * role;
};

int main()
{
    Employee joe={51,"Joe Presci", "Carpenter"};

    Employee * ptr = &joe;

    printf("%s has the role of %s and the id of %d.\n",
            ptr->name, ptr->role, ptr->id); //-> stands for reference operator

    return 0;
}