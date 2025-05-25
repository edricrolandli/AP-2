# include <iostream>
using namespace std;

int main(){
    system("CLS");

    // goto label = instruksi yang kita buat untuk melompat ke bagian program tertentu yang kita buat
    // Hello world, Fasilkom-TI, Ilmu Komputer, IKLC
    // -> Hello world, IKLC, Ilmu Komputer, Fasilkom-TI

    // a:
    //     cout << "Hello world" << endl;
    //     goto d;
    // b:
    //     cout << "Fasilkom-TI" << endl;
    //     return 0;
    // c:
    //     cout << "Ilmu Komputer" << endl;
    //     goto b;
    // d:
    //     cout << "IKLC" << endl;
    //     goto c;

    // jadi misal casenya di sini kita tuh pengen ubah urutan outputnya, dari yang line 8, jadi line 9
    // caranya tuh pakai goto label, simplenya ketika masuk ke line 13, dia bakal goto d, nah dicarinya si "d" dimana
    // di tuh di line 20, maka dia loncat ke sana, terus sampai la ke line 22, goto c, nah dicarinya lagiii si "c", berarti ke line 17
    // dst... 

    // terus pemakaiannya buat apa dong klo gitu? misalnya ketika kita ada codingan minta user masukkan dari bulan 1 hingga 12
    // tapi usernya nakal, ntah masukin string, atau diluar dari angka 1 - 12, nah biasanya kita persiapin pakai output, "invalid" contohnya
    // jadinya harus running ulang lagi dong?
    // nah dsini bisa pakai goto, jadi setelah "invalid", misal goto start;
    // kita siapin start: ke awal codingan pas minta user masukkan angkanya
    // jadinya lebih fleksibel kan codingannya, gak harus running ulang gitu

    // menampilkan bilangan genap 10 -> 2 dengan goto
    // int i = 10;

    // genap:
    // if (i % 2 == 0)
    // {
    //     cout << i << " ";
    // }
    // i--;

    // if (i >= 2)
    // {
    //     goto genap;
    // }

    // bingung? sama... tapi gini, awalnya dia tanya kan ya, i dibagi 2, hasil sisanya 0 tak? jika true, dia tampilkan
    // kebetulan awalnya 10, jadi masih memenuhi syarat kan, keep 10
    // lalu ada i--, ini tuh decrement, berarti dari angka 10, jadi 9
    // next, ke line 46, apakah 9 lebih besar sama dengan 2? true (ketika true, maka dia akan jalanin blok {}), maka dia goto genap, which is line 39
    // lalu ditanya lagi, apakah 9 dibagi 2 sisanya 0? false (karena 9 / 2 = 4 sisa 1), berarti dia gak jalanin blok code line 42, langsung ke i--
    // sekarang i = 8
    // lalu ditanya lagi, 8 lebih besar sama dengan 2? true, ngulang lagi
    // hingga i = 1
    // program looping ini akan berakhir karena sudah tidak memenuhi kondisi
    // tapi, sudah ada output yang di keep sebelumnya, yaitu 10, 8, 6, 4, 2 karena memenuhi syarat di line 40
    
    // statement while = tampilkan angka yang genap
    // int i = 1;
    // while (i <= 10)
    // {
    //     if (i % 2 == 0)
    //     {
    //         cout << i << " ";
    //     } i++;
    // }

    // Statement Do-While = tampilkan sekali dulu, yaitu 1, baru ngecek true atau false
    // int i = 1;
    // do
    // {
    //     cout << i << endl;
    // } while (i <= 0);

    // Statement For = tampilkan hello world sebanyak 5 kali
    // for (inisialisasi, kondisi, increase)
    // for (int i = 1; i <= 10; i += 2) {
    //     cout << "Hello world" << endl;
    // }

    // Nested For = simplenya, for pertama tuh biasanya untuk jumlah baris, kalau for kedua atau nestednya itu untuk isi dari baris tersebut (misal di line 87 itu 5 kali kan, jadi nanti setiap baris akan ada 5 bintang)
    // for (int i = 1; i <= 5; i++) {
    //     for (int j = 1; j <= 5; j++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // mari kita jelaskan perbedaan ketiga sintaks yang tujuannya sama, untuk perulangan, tapi pemakaiannya berbeda tergantung kondisi
    // 1. for = perulangan pasti
    // = ketika iterasinya sudah diketahui, atau tau batas jelas mau ngulang apa
    // contoh mau tampilkan "Hello, World!" 5 kali, berarti uda tau kan i = 5

    // 2. while = perulangan kondisi
    // = ketika gatau iterasinya berapa kali, jadi tergantung kondisinya terpenuhi gak?
    // contoh di line 62, perulangan akan terus terjadi selama i lebih kecil sama dengan 10, ketika sudah 11, maka dia akan berhenti dan lanjut ke line baru

    // 3. do-while = perulangan kondisi, tapi wajib sekali
    // = mirip while, tapi kita pengen nih at least jalanin sekali dulu deh, baru ngecek kondisinya

    // tambahan, mungkin bingung ya kapan pakai do-while, contohnya itu misal ada program kasir
    // pertama, kita gatau nih pembeli bakal beli berapa barangnya, berarti iterasi gatau dong? otomatis antara while atau do-while
    // tapi kita pengen nih, buat tawarin menu dulu, kira" pembelinya mau tak? makanya kita pakai do-while
    // baru kita nunggu respons user, klo misal dia gamau, yauda keluar, tapi kalau mau, nah bakal ngulang, dengan ini lebih fleksibel karena gak berpatokan harus berapa kali pesen atau kondisinya harus selalu (true)
    
    // segitiga siku-siku
    // for (int i = 1; i <= 5; i++) {
    //     for (int j = 1; j <= i; j++)  {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // ini sama ya seperti penjelasan tadi, for pertama untuk baris, berarti nanti tinggi dari setigitanya 5
    // lalu for kedua katanya j <= i, berarti makin lama bakal makin banyak bintangnya karena disesuaikan, baris 1 ada 1, baris 2 ada 2, dst
}
