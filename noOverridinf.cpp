#include <iostream>
using namespace std;

class baseclass
{
public:
    virtual void perkenalan() final
    {
        cout << "Halo saya function dari base class";
    }
};


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
