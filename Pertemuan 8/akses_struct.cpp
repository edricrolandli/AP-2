# include <iostream>
# include <string.h>

using namespace std;

struct mahasiswa
{
    string nama;
    int umur;
    float ipk;
};


int main()
{
    system("CLS");

    mahasiswa mhs1;

    mhs1.nama = "Edric";
    mhs1.umur = 19;
    mhs1.ipk = 4.00;

    // cout << "Nama = " << mhs1.nama << endl;
    // cout << "Umur = " << mhs1.umur << endl;
    // cout << "IPK = " << mhs1.ipk << endl;

    mahasiswa *ptr_mhs = &mhs1;
    cout << "Nama = " << ptr_mhs -> nama << endl;
    cout << "Umur = " << ptr_mhs -> umur << endl;
    cout << "IPK = " << ptr_mhs -> ipk << endl;
}