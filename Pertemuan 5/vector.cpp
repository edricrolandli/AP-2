#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

int main() {
    system("cls");

    // deklarasi vektor dengan tipe data string, "nama"
    vector<string> nama = {"Alya", "Rizky", "Rifki", "Fatih", "Dhafa"};

    // for (string karyawan : nama) {
    //     cout << karyawan << endl;
    // }

    // push back untuk add di paling belakang
    nama.push_back("Dani");
    cout << "Setelah menambah data: " << endl;
    for (string karyawan : nama) {
        cout << karyawan << endl;
    }
    
    // pop back untuk hapus paling belakang
    nama.pop_back();
    cout << "Setelah menghapus data: " << endl;
    for (string karyawan : nama) {
        cout << karyawan << endl;
    }

    // sama sebenarnya hapus juga, tapi ini lebih fleksibel, jadi kita bisa hapus yang di tengah" aja kah, intinya urutan tertentu
    nama.erase(nama.begin() + 3);
    cout << "Setelah menghapus data: " << endl;
    for (string karyawan : nama) {
        cout << karyawan << endl;
    }
}
