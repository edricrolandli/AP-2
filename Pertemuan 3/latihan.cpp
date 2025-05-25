# include <iostream>
using namespace std;

int main(){
    int nilai;

    system("CLS");

    cout << "Masukkan bilangan bulat : "; cin >> nilai;

    if (nilai % 5 == 0 && nilai % 10 == 0)
    {
        cout << "Bilangan habis dibagi 5 dan 10" << endl;
    }
    else
    {
        if (nilai % 5 == 0)
        {
            cout << "Bilangan habis dibagi 5" << endl;
        }
        else if (nilai % 10 == 0)
        {
            cout << "Bilangan habis dibagi 10" << endl;
        }
        else
        {
            cout << "Bilangan tidak habis dibagi keduanya";
        }
    }

    // penjelasannya disiniii
    // jadi simplenya codingan ini untuk ngecek, bilangan yang dimasukkan itu, bisa habis dibagi 5 dan 10, atau hanya 5, atau hanya 10, atau gak habis dibagi 5 ataupun 10
    // karena ada 4 kondisi, berarti pakai, if-else if-else
    // nah tapi disini kita bisa pakai nested for, di mana programnya nyari tau dulu di line 11, apakah nilai yang dimasukin bisa dibagi keduanya? (pakai && untuk ensure kedua kondisi true)
    // kalau misal salah satu aja false, dia bakal ke codingan else, disinilah nested for lagi
    // ngeceknya satu-satu, dari apakah habis dibagi 5 aja bisa gak? baru ke 10, nah klo 2"nya gabisa, berarti otomatis dong gabisa dibagi dua"nya

    // kenapa gak langsung check bagi 5 dulu? atau bagi 10 dulu? karena ada kemungkinan ketika kita masukkan input 10
    // berarti bisa dong dibagi keduanya, tapi klo kita ngecek mulai dari (nilai % 5 == 0), outputnya otomatis keluar hanya dibagi 5, padahal harusnya "Bilangan habis dibagi 5 dan 10" kan
    // gitu ajah
}
