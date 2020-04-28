#include <cstdio>
#include <string>

using namespace std;

void func(string & i)
{
    i="Hello from the func";
    printf("The string from the funct  is \" %s \".\n",i.c_str());
}

int main()
{
    string i="Hello from the main function";
    printf("The string is %s.\n", i.c_str());
    func(i);
    printf("The string is %s.\n",i.c_str());


    return 0;
}