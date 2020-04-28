#include <cstdio>
#include <string>

using namespace std;

const string & func() // returning a value as reference is not stored on the stack , so it allows greater size objects
{
    const static string  mystring = "This is func()";
    return mystring;
}

int main()
{
    puts("This is from the main function");
    const string newString=func();
    printf("Secondly, it returns %s.\n", newString.c_str());
    return 0;
}
