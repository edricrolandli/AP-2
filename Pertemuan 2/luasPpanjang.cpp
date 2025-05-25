# include <iostream>
using namespace std;

int main(){
    float panjang, lebar, luas;

    cout << "Masukkan panjang : "; cin >> panjang;
    cout << "Masukkan lebar : "; cin >> lebar;

    luas = panjang * lebar; // ini kayak | L = p x l (di matematika)
    cout << "Luas = " << luas << endl; 

    return 0;

    // simplenya, codingan ini tuh buat hitung luas dari suatu persegi panjang, di mana panjang n lebarnya dari usernya
    // jadi misal panjang masukin 2
    // lebar 3
    // programnya bakal hitung tuh, luas = panjang x lebar (L = 2 x 3)
    // maka outputnya nanti 6
}
