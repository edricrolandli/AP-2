# include <iostream>
using namespace std;

// sedikit penjelasan dulu yah untuk deklarasi fungsi
// jadi fungsi tuh bisa kita buat sebelum main function yang berisi code utama kita

// fungsi tanpa nilai balikan = ini tuh seperti procedure di pascal
void tampilkan_pesan(){
    cout << "==== SELAMAT DATANG DI AP 2 ====" << endl;
}

// ketika kita memanggil tampilkan_pesan() di main code, maka akan dijalankan block code yang di {}

// fungsi dengan nilai balikan = ini seperti function sederhana di pascal
int tambah(int a, int b){
    return a + b;
}

// sama juga, jadi kita sekarang punya fungsi tambah, bisa dipanggil berkali", jadi ketika kita pengen lakukan penjumlahan, bisa nih tinggal panggil
// tambah(), lalu isi di dalamnya apa yang mau ditambah
// contoh tambah(3, 5), maka yaa outputnya 3 + 5 = 8

// fungsi overload = fungsi yang namanya sama, tapi bisa aja variabel atau jumlahnya beda
int kali(int a, int b) {
    return a * b;
}

double kali(double a, double b) {
    return a * b;
}

// fungsi rekursif = contoh paling sederhana itu biasanya faktorial, jadi dia manggil fungsinya dia sendiri di dalam fungsi tersebut
// logikanya, contoh faktorial 3 (3!= 3 x 2!)
// nah berarti 3 faktorial itu adalah bilangan dia sendiri dikali faktorial - 1 dari dirinya (itulah kenapa line 42 seperti itu rumusnya)
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
    cout << "Hasil penjumlahan : " << hasil_tambah << endl; // kebetulan disini x nya 5 dan y nya 3, jadi output pasti 8)

    // menggunakan fungsi overload
    int hasil_kali_int = kali(x, y);
    double hasil_kali_double = kali(5.5, 2.0);

    // biar apa? jadi ketika kita pengen melakukan perkalian, rupanya input itu kan bisa beda" yah... ada yang perkalian biasa, ada yang perkalian desimal
    // nah dengan adanya fungsi overload, kita tak perlu takut error, dia otomatis langsung menyesuaikan
    // bisa dilihat di line 60, kita tau nih pengen kaliin 5.5 dengan 2.0, yauda kita panggil fungsinya tapi state di awal klo itu yg double

    cout << "Hasil perkalian (int)      : " << hasil_kali_int << endl;
    cout << "Hasil perkalian (double)   : " << hasil_kali_double << endl;

    // menggunakan fungsi rekursif
    int angka = 5;
    cout << "Faktorial dari " << angka << " adalah : " << faktorial(angka) << endl;

    // ini seperti tadi yah, faktorial 5 (5!), hasilnya 120
    // flownya dari 5 x 4!
    // 5 x 4 x 3! 
    // dst hingga 5 x 4 x 3 x 2 x 1 = 120
}
