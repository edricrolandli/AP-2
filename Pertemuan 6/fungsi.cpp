# include <iostream>
using namespace std;

// fungsi tanpa nilai balikan
void tampilkan_pesan(){
    cout << "==== SELAMAT DATANG DI AP 2 ====" << endl;
}

// fungsi dengan nilai balikan
int tambah(int a, int b){
    return a + b;
}

// fungsi overload = fungsi yang namanya sama, tapi bisa aja variabel atau jumlahnya beda
int kali(int a, int b) {
    return a * b;
}

double kali(double a, double b) {
    return a * b;
}

// fungsi rekursif
int faktorial(int n){
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * faktorial(n - 1);
    }
}

int main(){
    system("CLS");

    // menggunakan fungsi tanpa nilai balikan
    tampilkan_pesan();

    int x = 5, y = 3;

    // menggunakan fungsi dengan nilai balikan
    int hasil_tambah = tambah(x, y);
    cout << "Hasil penjumlahan : " << hasil_tambah << endl;

    // menggunakan fungsi overload
    int hasil_kali_int = kali(x, y);
    double hasil_kali_double = kali(5.5, 2.0);

    cout << "Hasil perkalian (int)      : " << hasil_kali_int << endl;
    cout << "Hasil perkalian (double)   : " << hasil_kali_double << endl;

    // menggunakan fungsi rekursif
    int angka = 5;
    cout << "Faktorial dari " << angka << " adalah : " << faktorial(angka) << endl;
}