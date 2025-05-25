#include <iostream>
#include <string>
#include <array>
using namespace std;

int main() {
    system("cls");

    int matrix1[2][2];
    int matrix2[2][2];
    int result[2][2];

    cout << "Masukkan elemen matrix 1 (2x2):" << endl;
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            cout << "Elemen [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
            getchar();
        }
    }

    cout << "Masukkan elemen matrix 2 (2x2):" << endl;
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            cout << "Elemen [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
            getchar();
        }
    }

    cout << "Hasil penjumlahan matrix 1 dan matrix 2:" << endl;
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
}

// simplenya dari latihan ini tuhhhh
// awalnya inisialisasi dulu matriks ukuran 2x2, lalu ada juga untuk simpen hasil
// nah setelah itu, perulangan itu untuk masukkan inputan dari matriks"nya
// line 35 and so on itu untuk jumlahkan, dari matriks 1 dengan matriks 2
// sederhana tapi codingannya mematikan yaampun...
// tapi intinya gitu deh
