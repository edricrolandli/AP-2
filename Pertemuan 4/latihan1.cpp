# include <iostream>
using namespace std;

int main(){
    string kalimat;
    int i;

    system("CLS");

    cout << "Masukkan kalimat : "; getline(cin, kalimat);

    for (i = 0; i < kalimat.length(); i++) {
        kalimat[i] = toupper(kalimat[i]);
    }

    cout << "Kalimat dalam huruf kapital : "  << kalimat << endl;

    return 0;

    // codingan ini simplenya biar apapun yang kita masukin, hrufnya jadi besar
    // kok bisa? caranya kita pakai perulangan, kita cari tau dulu, length dari kata yang dimasukkan itu berapa? misal "saya makan"
    // berarti ada 10 (spasi dihitung)
    // nah nanti dia akan ngeubah dari indeks 0, hingga indeks ke 9, menggunakan sintaks toupper
    // gitu aja sih
}
