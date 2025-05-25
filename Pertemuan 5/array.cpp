#include <iostream>
#include <string>
#include <array> // library untuk array
using namespace std;

int main() {
    system("cls");

    string nama[5]; // deklarasi array itu pakai [], di mana diisi kapasitasnya berapa
    // disini ada 5, maka akan ada nama dari indeks 0 hingga 4

    nama[0] = "Alya"; 
    nama[1] = "Rizky";
    nama[2] = "Rifki";
    nama[3] = "Fatih";
    nama[4] = "Dhafa";

    // cara aksesnya pakai for, jadi ini biar user masukkan input ke setiap indeks dari arraynya
    // cout << "Masukkan 5 nama: " << endl;
    // for (int i = 0; i < 5; i++) {
    //     cout << "Nama ke-" << i + 1 << ": ";
    //     cin >> nama[i];
    // }

    // cara lain untuk deklarasi (bukan pakai for)
    // string nama[5] = {"Alya", "Rizky", "Rifki", "Fatih", "Dhafa"};
    // string nama[] = {"Alya", "Rizky", "Rifki", "Fatih", "Dhafa"};

    // ini tampilkan isi nama tadi dari indeks awal hingga akhir
    // for (int i = 0; i<5; i++) {
    //     cout << "Nama ke-" << i + 1 << ": " << nama[i] << endl;
    // }

    // sama, tapi dari akhir ke awal
    // for (int i = 4; i >= 0; i--) {
    //     cout << "Nama ke-" << i + 1 << ": " << nama[i] << endl;
    // }

    // deklarasi matriks, tapi ini yg ukuran 2x3, lalu inisialisasi, dan tampilkan
    // int matrix[2][3] = {{1,2,3}, {4,5,6}};
    // cout << "Matrix 2x3:" << endl;
    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // } 

    // sama, bedanya ini 3x3
    // int matrix1[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    // cout << "Matrix 3x3:" << endl;
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cout << matrix1[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // sama tapi 4x6
    // int matrix2[4][6] = {{10,20,30,40,50,60}, {70,80,90,10,11,12}, {13,14,15,16,17,18}, {19,20,21,22,23,24}};
    // cout << "Matrix 4x6:" << endl;
    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 6; j++) {
    //         cout << matrix2[i][j] << "\t";
    //     }
    //     cout << endl;
    // }

    // ini cara akses karakter tertentu dari suatu string, triknya pakai indeks
    // string nama1 = "Naufal";
    // cout << nama1[0] << endl; // indeks 0 berarti dari pertama
    // cout << nama1[2] << endl; // indeks 2 berarti dari ketiga
    
    // ini tampilkan tapi pakai cara perulangan, jadi cout dari indeks awal hingga akhir
    // for (int i = 0; i < nama1.length(); i++) {
    //     cout << nama1[i] << endl;
    // }

    // ganti nilai s1 jadi punya s2 = World
    // string s1 = "Hello", s2 = "World";
    // s1 = s2;
    // cout << s1 << endl;

    // gabungkan s1 dengan s2
    // cout << s1 + s2 << endl;

    // panjang karakter dari s1 dan s2
    // cout << (s1+s2).length() << endl;

    // substr ke s1, jadi akses dari karakter indeks ke 2 sepanjang 4 karakter
    // lalu menangkap substr dari gabungan s1 dan s2, dari indeks ke 5 sepanjang 3 karakter
    // cout << s1.substr(2,4) << endl; 
    // cout << (s1+s2).substr(5,3) << endl;

    // sizeof buat cari tau berapa byte variable tersebut
    // short angka = 10;
    // cout << "Ukuran integer: " << sizeof(angka) << " bytes" << endl;

    // sama, tapi bedanya ini ke array
    // int nilai[] = {10, 20, 30, 40, 50};
    // cout << "Ukuran array nilai: " << sizeof(nilai) << " bytes" << endl;

    // ini ke string
    // string s = "Alya";
    // cout << "Ukuran string: " << sizeof(s) << " bytes" << endl;

    // nah ini cari tau jumlah element yang ada di dalam array, caranya ukuran array dibagi ukuran string
    // string nama_karyawan[] = {"Budi", "Suep", "Aldi", "Cecep"};
    // int n = sizeof(nama_karyawan)/sizeof(string);
    // cout << n << endl;

    // pakai array library
    // array<float, 5> nilai = {10.5, 20.5, 30.5, 40.5, 50.5};
    // cout << "Nilai array: ";
    // for (int i = 0; i < nilai.size(); i++) {
    //     cout << nilai[i] << " ";
    // }

    // untuk tampilkan nilai array yang tadi di deklarasi
    // for (float n : nilai) {
    //     cout << n << " ";
    // }
}
