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

class darivedClass : public baseclass
{
public:
    void perkenalan()
   

int main()
{
    darivedClass a;
    a.perkenalan();

    return 0;

}
