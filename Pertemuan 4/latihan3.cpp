# include <iostream>
using namespace std;

int main() {
    string password, sandi, expected = "";

    cout << "Masukkan kata sandi : ";
    cin >> password;

    cout << "Masukkan kata : ";
    cin >> sandi;

    // Membuat string "expected" berdasarkan pola tertentu
    for (int i = 0; i < password.length(); i++) {
        expected += password.substr(0, i + 1);
    }

    // Mengecek apakah input kedua sesuai dengan pola yang diharapkan
    if (expected == sandi) {
        cout << "Tulisan agen benar" << endl;
    } else {
        cout << "Tulisan agen salah" << endl;
    }

    return 0;

    // ini lebih seru lagi, jadi usernya diminta untuk masukin password dulu, terus sandi yang dimasukkan itu harus unik
    // contoh : jika abc, maka sandi agen yang bener itu, aababc
    // jadi kayak berulang gitu
    // caranya dia nyimpen di var expected
    // nah itu tuh pakai substr, simplenya kayak ketika kita ada string besar, kita hanya pengen nih sebagian dari string besar itu aja yang kita ambil
    // contoh, ayam, kita pengen ambil yam nya aja
    // jadi jadi disini, substr di ambil dari indeks 0, sampai i + 1, ini yang ngebuat programnya bisa ambil lebih dari 1
    // jadi ketika input "ayam", dia bakal looping dari awal dulu
    // indeks 0, maka a
    // indeks 1, maka a + ay = aay
    // indeks 2, maka a + ay + aya = aayaya
    // terakhir, indeks 3, aayayaayam
}
