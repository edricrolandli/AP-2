# include <iostream>
using namespace std;

int main(){
    string kalimat;
    int i;

    system("CLS");

    cout << "Masukkan kalimat : "; getline(cin, kalimat);

    for (i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] == 'a' || kalimat[i] == 'e' || kalimat[i] == 'i' || kalimat[i] == 'o' || kalimat[i] == 'u')
        {
            kalimat[i] = toupper(kalimat[i]);
        }
    }

    cout << "Kalimat dalam huruf kapital : "  << kalimat << endl;

    return 0;

    // nah kalau yang awalnya kan semua hruf dibuat besar, tapi gimana casenya kita pengen huruf vokal aja? 
    // kita tambahkan if, jadi kita adjust dikit dari codingan sebelumnya, dia tetep ngecek satu", dari indeks 0 hingga 9, tapi dia cari tau, apakah huruf itu vokal atau engga
    // contoh, "saya makan", indeks 0, s, bukan aeiou, berarti tetep s
    // indeks 1, a, nah ke detect tuh, karena memenuhi kondisi if (di mana itu pakai or, jadi salah satu terpenuhi aja dianggap true dan akan jalanin codingan block di dalamnya)
    // a jadi A
    // dst hingga outputnya jadi "sAyA mAkAn"
}
