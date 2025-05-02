# include <iostream>
using namespace std;

string nama_global = "Ilmu";

void nama_variabel (){
    string nama_lokal = "Komputer";

    // coba akses
    cout << nama_lokal << endl;

    // coba akses
    cout << nama_global << endl;
}

int main(){
    nama_variabel();

    // coba akses
    cout << nama_global << endl;

    // coba akses
    // cout << nama_lokal << endl;
}