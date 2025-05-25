#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

int main() {
    system("cls");

    vector<string> nama = {"Alya", "Rizky", "Rifki", "Fatih", "Dhafa"};

    // for (string karyawan : nama) {
    //     cout << karyawan << endl;
    // }

    nama.push_back("Dani");
    cout << "Setelah menambah data: " << endl;
    for (string karyawan : nama) {
        cout << karyawan << endl;
    }

    nama.pop_back();
    cout << "Setelah menghapus data: " << endl;
    for (string karyawan : nama) {
        cout << karyawan << endl;
    }

    nama.erase(nama.begin() + 3);
    cout << "Setelah menghapus data: " << endl;
    for (string karyawan : nama) {
        cout << karyawan << endl;
    }
}