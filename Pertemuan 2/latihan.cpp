// inilah tugas sebelum keluar lab hari itu
# include <iostream>
using namespace std;

int main(){
    float jari, volume, luas_permukaan;
    const float phi = 3.14; // const ini tuh konstanta, jadi ketika kita punya variable yang nilainya uda mutlak, atau memang hanya itu aja, pakai const
    // contohnya apa? misal nilai gravitasi, itu dh pasti 9.8 atau 10 kan ya, atau nilai phi, itu dh psti antara 3.14 atau 22/7
    // ini tuh buat ensure klo pas hitungan gak keubah nih, jadi dari awal smpe akhir program bakal gitu nilainya

    cout << "Masukkan jari-jari : "; cin >> jari;

    volume = ((float)4/3) * (phi) * (jari*jari*jari);
    luas_permukaan = 4 * phi * jari * jari;

    // penjelasan sedikit untuk line 13 (karena ini krusial)
    // kenapa harus di casting jadi float, contoh klo tetep int, 4 / 3 di program itu hasilnya 1, dan kalau 1 otomatis hitungannya jadi miss dong
    // jadi biar hitungannya akurat, 4/3 itu harus di ubah dulu, untuk phi n jari" gausah lagi, karena uda float kan ya
    // simplenya gitu aja sih, biar 4/3 dapetnya 1.333...
    // (gak simple sih, pas ngoding agak lelet smpe gak ngeh kenapa salah terus)

    cout << "Volume = " << volume << endl;
    cout << "Luas Permukaan = " << luas_permukaan << endl;
}
