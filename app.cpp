#include <iostream>
using namespace std;

class mahasiswa {
    //syarat enKapulasi
private:
    string nim;
protected :
    string nama;
    string prodi;
    public:
        virtual void profilMhs() = 0;

        mahasiswa(string pNama, string pNim, string pProdi) :
        nim(pNim), nama(pNama), prodi(pProdi){

        } 

        void setNama(string pNama){
                return nama;
        }
};

class maba : public mahasiswa {
    public:

        maba(string nama, string nim, string prodi) :
        mahasiswa(pNama, setNim, pprodi), {

        }
        void profilMhs() override{
            cout << "Nama : " << nama << endl;
            cout << "Nim : " << getNim() << endl;
            cout << "prodi : " << prodi << endl;
        }

};

int main()
{

        mahasiswa *mhs;
        maba Lintang("Lintang", "20240000", "TI")
        mhsTua Gibran("Gibran", "20170000", "TI")


    mhs = &lintang:
    mhs-> profilMhs();
    mhs = &gibran:
    mhs->profilMhs();

    return 0;
}