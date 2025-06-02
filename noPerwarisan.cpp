#include <iostream>
using namespace std;


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