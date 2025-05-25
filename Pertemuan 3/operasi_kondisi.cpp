# include <iostream>
using namespace std;

int main(){
    int nilai;

    system("CLS");

    cout << "Masukkan nilai : "; cin >> nilai;

    // if statement
    // if (nilai <= 65)
    // {
    //     cout << "Anda tidak lulus!" << endl;
    // }

    // Penjelasan if statement
    // ini simple sih, cara bacanya kira" gini
    // jika "nilai" lebih kecil sama dengan 65, maka tampilkan "Anda tidak lulus!"

    // if - else statement
    // if (nilai <= 65)
    // {
    //     cout << "Anda tidak lulus!" << endl;
    // }
    // else
    // {
    //     cout << "Anda lulus!" << endl;
    // }

    // Penjelasan If-Else 
    // mirip if, bedanya tambahkan 1 kondisi lagi
    // contoh tadi kan awalnya jika "nilai" lebih kecil sama dengan 65, gimana dong kalau lebih besar? nah inilah fungsi else, buat tampilkan "Anda lulus"

    // if - else if - else statement
    // if (nilai == 100)
    // {
    //     cout << "Anda Keceh" << endl;
    // }
    // else if (nilai <= 65)
    // {
    //     cout << "Anda tidak lulus!" << endl;
    // }
    // else
    // {
    //     cout << "Anda lulus" << endl;
    // }

    // Else if, ini tuh biar codingan bisa lebih kompleks
    // contoh, kita pengen bedain siswa yg ujiannya dapet nilai 100, terus yang gak lulus, atau yang lulus tapi gak 100
    // kalau hanya if - else, kan maksimal 2 kondisi aja, pakai else if memungkinkan 3 kondisi atau bahkan lebih

    // nested if
    // if (nilai <= 65)
    // {
    //     cout << "Anda tidak lulus" << endl;
    // }
    // else
    // {
    //     if (nilai == 100)
    //     {
    //         cout << "Anda lulus dan Anda Hebat" << endl;
    //     }
    //     else
    //     {
    //         cout << "Anda lulus" << endl;
    //     }
    // }

    // nested ini sesuai namanya, if di dalam if
    // contohnya apa? misal yang nilai 100 dan yang lulus kan kondisinya sama" lebih dari 65 kan ya?
    // jadi kita bisa buat, jika lebih dari 65, nah baru masuk ke if lagi
    // di sensing, nilainya 100 atau diluar dari 100 (66 - 99)

    // switch statement
    // switch (nilai)
    // {
    // case 1:
    //     cout << "Senin" << endl;
    //     break;
    // case 2:
    //     cout << "Selasa" << endl;
    //     break;
    // case 3:
    //     cout << "Rabu" << endl;
    //     break;
    // case 4:
    //     cout << "Kamis" << endl;
    //     break;
    // case 5:
    //     cout << "Jumat" << endl;
    //     break;
    // case 6:
    //     cout << "Sabtu" << endl;
    //     break;
    // case 7:
    //     cout << "Minggu" << endl;
    //     break;
    // default: // selain dari pernyataan yang ada
    //     cout << "Inputan tidak valid" << endl;
    //     break;
    // }

    // switch range
    // switch (nilai)
    // {
    // case 85 ... 100:
    //     cout << "A" << endl;
    //     break;
    // case 80 ... 84:
    //     cout << "B+" << endl;
    //     break;
    // case 75 ... 79:
    //     cout << "B" << endl;
    //     break;
    // case 70 ... 74:
    //     cout << "C+" << endl;
    //     break;
    // case 65 ... 69:
    //     cout << "C" << endl;
    //     break;
    // case 60 ... 64:
    //     cout << "D" << endl;
    //     break;
    // default:
    //     cout << "E" << endl;
    //     break;
    // }

    // Penjelasan switch
    // Switch ini juga termasuk if" tadi, tapi bedanya, terkadang ada codingan yang lebih efektif kalau pakai switch
    // contoh, misal bulan deh, klo user masukin 1, munculnya "januari", 2 februari, and so on
    // kalau pakai if-else if-else, itu bakal panjang banget, di mana berarti if 1, else if nya 10, else nya 1, selain ribet, bakal bikin codingan gak efektif
    // sedangkan disini klo pakai switch, selain lebih rapi, lebih simple juga 

    // tambahan, untuk switch itu harus ada break; biar ketika ada kondisi yang memenuhi, dia lngs keluar dari pengecekan
    // klo engga, dia bakal ngecek terus padahal uda ada yang memenuhi
    // lalu, ada juga nih else versi switch, yaitu default, jadi ketika semua kondisi gak ada yang memenuhi, contoh di codingan switch line 75
    // itu hanya sampai 7, gimana kalau dimasukkan 0, negatif, atau bahkan lebih dari 7, maka ditampilkan "inputan tidak valid", begituh

    // Ternary Operator
    // string check_num = (nilai % 2 == 0) ? "Genap" : "Ganjil";
    // cout << nilai << " tuh Bilangan " << check_num << " sih " << endl;

    // Ternary ini, sebenarnya mirip dengan if else, bedanya ini bentuk simple yang literally bisa hanya 1 line
    // kapan make? kalau rasa codingannya gak kompleks dan memang 2 kondisi aja
    // contoh, ngecek bilangan ganjil atau genap, seperti di line 142
    // caranya adalah
    // 1. buat variabel dulu buat nyimpen hasilnya
    // 2. dilanjutkan "=" sama dengan, lalu tulis kondisinya dalam kurung (), misal (nilai % 2 == 0)
    // 2a. kondisinya adalah ditanya, apakah sisa bagi dari bilangan dibagi 2 itu 0?
    // 3. nah sebagai pemisah antara kondisi dengan output itu dengan "?"
    // 4. sekarang masuk ke output, output kiri adalah ketika kondisi bernilai true, output kanan ketika false
    // pemisahnya itu dengan ":"
    // contoh : nilai = 5
    // 5 % 2 = 1, apakah hasil modulonya 0? false, maka outputnya yang kanan, yaitu "Ganjil"
}
