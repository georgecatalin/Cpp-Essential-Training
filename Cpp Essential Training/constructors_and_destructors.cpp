#include <cstdio>
#include <string>

using namespace std;

const string unknown="unknown";
const string clonePre="clone-";

//interface
class Animal
{
    string _type=unknown;
    string _name=unknown;
    string _sound=unknown;
    public:
        Animal(); //default constructor
        Animal(const string & type, const string & name, const string & sound);
        Animal(const Animal &); // copy constructor
        ~Animal(); //destructor
        void print() const;
};

//implementation
Animal::Animal()
{
    puts("default constructor");
}

Animal::Animal(const string & type, const string & name, const string & sound) : _type(type),_name(name),_sound(sound)
{
    puts("Constructor with arguments");
}

Animal::Animal(const Animal & a)
{
    puts("copy constructor");
    _name=clonePre+a._name;
    _type=a._type;
    _sound=a._sound;
}

Animal::~Animal() //destructor
{
    printf("destructor: %s the %s.\n",_name.c_str(),_type.c_str());
}

void Animal::print() const
{
    printf("%s the %s says %s.\n",_name.c_str(),_type.c_str(),_sound.c_str());
}

int main()
{
    Animal a;
    a.print();

    const Animal b("goat","Bob","Baah");
    b.print();

    const Animal c=b;
    c.print();

    puts("End of main");
    return 0;
}