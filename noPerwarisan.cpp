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



int main()
{
    darivedClass a;
    a.perkenalan();

    return 0;

}