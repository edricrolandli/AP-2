# include <iostream>
# include <string.h>
# include <vector>

using namespace std;

struct Alamat
{
    string jalan;
    string kota;
    int kode_pos;
};


struct mahasiswa
{
    string nama;
    int umur;
    float ipk;
    Alamat alamat;
};


int main()
{
    system("CLS");

    mahasiswa mhs1;

    // mhs1.nama = "Edric";
    // mhs1.umur = 19;
    // mhs1.ipk = 4.00;

    // mhs1.alamat.jalan = "Jl. X";
    // mhs1.alamat.kota = "Medan";
    // mhs1.alamat.kode_pos = "20155";

    // cout << "Alamat = " << mhs1.alamat.jalan << " " << mhs1.alamat.kota << " " << mhs1.alamat.kode_pos << endl;

    vector<mahasiswa> mahasiswa;
    int n;
    cout << "Masukkan banyak mahasiswa : "; cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Mahassiwa ke -" << i + 1 << endl;

        cin.get();
        cout << "Masukkan nama : "; getline(cin, mhs1.nama);
        cout << "Masukkan umur : "; cin >> mhs1.umur;
        cout << "Masukkan IPK : "; cin >> mhs1.ipk;

        mahasiswa.push_back(mhs1);
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Mahasiswa : " << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "IPK : " << mahasiswa[i].ipk << endl;
    }
    
}