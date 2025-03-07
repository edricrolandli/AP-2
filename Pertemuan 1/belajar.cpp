# include <iostream>
# include <conio.h> // header untuk fungsi getch() and getche()
using namespace std;

int main(){
    string nama;
    int nim;
    float ip;
    char kom, jenis_kelamin;

    cout << "Hello, World! \n";

    cout << "Masukkan nama Anda : "; getline(cin, nama);
    cout << "Masukkan KOM Anda  : "; cin >> kom;
    cout << "Masukkan NIM Anda  : "; cin >> nim;
    cout << "Masukkan IP Anda   : "; cin >> ip;
    cout << "Masukkan jenis kelamin Anda (L/P) : "; jenis_kelamin = getche(); cout << endl;

    cout << nama << endl;
    cout << kom << endl;
    cout << nim << endl;
    cout << ip << endl;
    putchar(jenis_kelamin);

    getch();
}