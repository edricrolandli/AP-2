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