#include <iostream>
using namespace std;


class joko : public seseorang
{
void pesan()
    {
        cout << "Pesan dari joko" << endl;
    }
};
class lia : public seseorang
{
void pesan()
    {
        cout << "Pesan dari lia" << endl;
    }
};

int main()
{
    seseorang *obyek;
    joko a;
    lia b;

    obyek = &a;
    obyek ->pesan();
    obyek = &a;
    obyek ->pesan();
    // a.seseorang::pesan();
    // b.seseorang::pesan();

    return 0;
}

