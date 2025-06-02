#include <iostream>
using namespace std;

class baseclass final
{
public:
    virtual void perkenalan()
    {
        cout << "Halo saya function dari base class";
    }
};

class darivedClass : public baseclass
{
public:
    void perkenalan()
    {
        cout << "Halo saya function dari derived Class";
    }
};

int main()
{
    darivedClass a;
    a.perkenalan();

    return 0;

}