# include <iostream>
using namespace std;

void sapa (string nama) {
    cout << "Halo " << nama << " ! Selamat datang di AP 2 !" << endl;
}

int main(){
    string nama_user = "Edric";
    sapa(nama_user);
    return 0;
}

// ini belajar simple sih penggunaan function itu gimana
// jadi kita bisa tuh masukin inputan user ke dalam function biar fleksibel, contoh mau sapa orang
// kita gatau kan ya usernya namanya siapa, yauda kita minta masukin
// nah jadi nanti var nama_user = var aktual
// dari aktual, dikirimlah ke parameter, nah jadi namanya itu bakal dimasukin ke dalam void (line 5)
// jadi hasil outputnya bisa tuh "Halo (sesuai nama yang dimasukkan user) dst..." gituuu
