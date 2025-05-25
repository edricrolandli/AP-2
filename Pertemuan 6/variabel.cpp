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

// penjelasan di siniiii
// jadi simplenya codingan ini untuk buktiin pemakaian dan perbedaan dari variable global dan lokal
// global = bisa diakses di mana aja, termasuk main, ataupun ya dalam fungsi
// lokal = hanya bisa diakses di fungsi itu aja

// jadi ketika kita coba akses (di line 23), itu pasti error karena gak mungkin variable lokal bisa diakses di main program
// beda casenya ketika di line 10, itu diakses di fungsi di mana dia di deklarasikan juga
