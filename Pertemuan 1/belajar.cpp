# include <iostream> // header untuk input dan output standar, seperti cout dan cin
# include <conio.h> // header untuk fungsi getch() and getche()
using namespace std; // agar tak perlu "std::" setiap kali penulisan, contoh std::cout menjadi cout

int main(){ // di C++ ini seperti kode utama, jadi nanti apa yang ingin di execute atau dioperasikan ditulis disini
    string nama; // deklarasi variabel "nama" dalam bentuk tipe data string
    int nim; // sama, deklarasi variabel juga, "nim" dalam bentuk tipe data int
    float ip; // deklarasi "ip" dalam bentuk float
    char kom, jenis_kelamin; // deklarasi "kom" dan "jenis_kelamin" dalam bentuk char

    cout << "Hello, World! \n"; // tampilkan tulisan "Hello, World!" ke layar, selain itu \n seperti enter, atau ke baris baru biar output rapi

    cout << "Masukkan nama Anda : "; getline(cin, nama); // tampilkan pesan, lalu getline untuk meminta user masukkan nama, kenapa tidak cin, karena nama makhluk hidup itu rata" lebih dari 1 kata, jadi getline agar program bisa mengambil input dari user dari nama, spasi gitu
    cout << "Masukkan KOM Anda  : "; cin >> kom; // sama, bedanya ini minta user masukkan kom (kelas) mereka dalam 1 karakter, lalu ambil inputnya
    cout << "Masukkan NIM Anda  : "; cin >> nim; // minta user masukkan NIM, lalu ambil inputnya
    cout << "Masukkan IP Anda   : "; cin >> ip; // minta user masukkan IP dalam float (desimal), contoh 4.0, lalu ambil inputnya
    cout << "Masukkan jenis kelamin Anda (L/P) : "; jenis_kelamin = getche(); cout << endl; // baris ini bedanya di getche, jdi fungsinya agar ambil input jenis kelamin user tanpa menunggu enter dan langsung menampilkannya
    // lalu endl sama seperti \n tadi, untuk ke baris baru

    // codingan di bawah untuk menampilkan semua hasil inputan yang sudah dimasukkan user
    cout << nama << endl; // cout itu menampilkan, lalu pemisahnya menggunakan << dan selanjutnya variabel yang mana? yaitu "nama" yang sebelumnya sudah diinput user di line 13
    cout << kom << endl;
    cout << nim << endl;
    cout << ip << endl;
    putchar(jenis_kelamin); // ini juga sama, jadi seperti pasangan dari getche setelah diinput user, nanti akan ditampilkan
    // gampangnya getche() untuk baca satu karakter dari keyboard dan tampilkan karakter tersebut di layar
    // sedangkan putchar() untuk tampilkan satu karakter di layar

    getch(); // nunggu pengguna menekan tombol sebelum program berakhir, jadi gak langsung end setelah program selesai di execute
}
