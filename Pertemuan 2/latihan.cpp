# include <iostream>
using namespace std;

int main(){
    float jari, volume, luas_permukaan;
    const float phi = 3.14;

    cout << "Masukkan jari-jari : "; cin >> jari;

    volume = ((float)4/3) * (phi) * (jari*jari*jari);
    luas_permukaan = 4 * phi * jari * jari;

    cout << "Volume = " << volume << endl;
    cout << "Luas Permukaan = " << luas_permukaan << endl;

}