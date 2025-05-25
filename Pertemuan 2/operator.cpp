// setelah pertemuan 1, dianggap yang sudah dijelaskan sebelumnya sudah paham, jadiii hanya sintaks baru yg di put comment
# include <iostream>
using namespace std;

int main(){
    int a, b;

    system("cls"); // inget clrscr di pascal? di cpp inilah cara bersihin terminal biar bersih

    // Assingment Operator
    a = 3; // disini variable "a" langsung di assign, istilahnya beri nilai ke "a", jadi sekarang "a" bernilai 3
    b = 5; // sama seperti "a"

    // Arithmetical Operator
    /*int tambah = a + b; 
    int kurang = a - b;
    int kali = a * b;
    float bagi = (float)a / (float)b; // type casting : berguna untuk mengubah type data dari sebuah variabel
    int modulo = a % b;

    // penjelasan line 15 - 19
    // ambil contoh untuk var "tambah", jadi di cpp kita bisa deklarasi sekaligus assign gitu
    // di var "tambah", itu di assign bahwa bakal jumlahin (+) antara var "a" dengan "b"
    // jadi misal "a" tadi 3, "b" itu 5, maka var "tambah" punya nilai sebesar 3 + 5, yaitu 8
    // dan itu berlaku untuk pengurangan (-), perkalian (*), pembagian (/), dan modulo (%)
    // karena di bahasa cpp program punya sintaks tersendiri untuk operasi aritmatika, misal perkalian bukan (x), tapi (*)

    // penjelasan bagi yang memakai type casting
    // untuk pembagian sendiri, misal 5 / 2, hasilnya 2.5 kan ya, berarti ini tipe data float (bilangan desimal)
    // tapi, "a" dan "b" tadi kan int, sedangkan kita mau simpen as float kan, jadi kita gunakan type casting, di mana kita ngubah yang sebelumnya dari int itu jadi float
    // caranya bisa dilihat di line 18, "a" gak langsung ditulis a, tapi float(a), dan hasilnya jadi float

    // penjelasan singkat modulo
    // apa tuh modulo? simplenya sisa bagi, inget pas sd diajarin cara bagi? misal 5 bagi 3, berarti 1 kan ya, terus 5 - 3, di bawah sisa 2
    // nah 2 itulah sisa bagi atau modulo
    // implementasinya, contoh sederhana ketika kita pengen cari tau, bilangan ini tuh ganjil atau genap
    // jadi ketika di modulo 2, kalau sisa baginya 1, maka otomatis bilangan itu ganjil, dan sebaliknya

    // tampilkan hasil"nyaa dari operasi tadii
    cout << "Hasil penjumlahan = " << tambah << endl;
    cout << "Hasil pengurangan = " << kurang << endl;
    cout << "Hasil perkalian = " << kali << endl;
    cout << "Hasil pembagian = " << bagi << endl;
    cout << "Hasil modulo = " << modulo << endl;*/

    // Relational Operator
    /*cout << (a == b) << endl;
    cout << (a < b) << endl;
    cout << (a <= b) << endl;
    cout << (a > b) << endl;
    cout << (a >= b) << endl;
    cout << (a != b) << endl;*/

    // Penjelasan Relational Operator
    // simplenya ini bandingin kedua variable dengan hubungan nilai
    // contoh kita pengen tau apakah a itu lebih kecil dari b tak? kita bisa pakai sintaks a < b
    // dan itu berlaku untuk sama besar (==), lebih kecil lebih besar (< >), lebih kecil / besar sama dengan (<= >=), dan tidak sama dengan (!=)

    // Logical Operator (&&, ||, !) 
    // cout << (true && true) << endl;
    // cout << (true && false) << endl;
    // cout << (false && true) << endl;
    // cout << (false && false) << endl;

    // klo yg tadi bandingin nilai, ini bandingin boolean, true atau false

    // cout << (true || true) << endl;
    // cout << (true || false) << endl;
    // cout << (false || true) << endl;
    // cout << (false || false) << endl;

    // cout << !true << endl;
    // cout << !false << endl;

    // simplenya, and itu bernilai true ketika dua"nya benar
    // or itu bernilai false ketika dua"nya false

    // Bitwise Operator (&, |, ^, ~, >>, <<) --> biner
    // cout << (5 & 7) << endl;
    // cout << (5 | 7) << endl;
    // cout << (5 ^ 7) << endl;
    // cout << (~7) << endl;
    // cout << (7 << 2) << endl; //coret kiri
    // cout << (7 >> 2) << endl; //coret kanan

    // Shorthand
    // a += 7;
    // cout << a << endl;

    // a -= 7;
    // cout << a << endl;

    // a *= 7;
    // cout << a << endl;

    // a /= 7;
    // cout << a << endl;

    // shorthand ini kayak cara penulisan cepet dan lebih simple aja
    // contoh kita pengen tambahin nih a dengan nilai 7, normalnya a = a + 7 kan
    // tapi di sini kita bisa pakai a += 7 gitu

    // Increment, Decrement
    // Pre Increment
    // cout << a << endl;
    // cout << ++a << endl;

    // cout << b << endl;
    // cout << ++b << endl;

    //Post Increment
    // cout << a << endl;
    // cout << a++ << endl;
    // cout << a << endl;

    // cout << b << endl;
    // cout << b++ << endl;
    // cout << b << endl;

    // Pre Decrement
    // cout << a << endl;
    // cout << --a << endl;

    // cout << b << endl;
    // cout << --b << endl;

    // Post Decrement
    // cout << a << endl;
    // cout << a-- << endl;
    // cout << a << endl;

    // cout << b << endl;
    // cout << b-- << endl;
    // cout << b << endl;

    // Penjelasan in / de crement thingy yang sangat panjang dari line 103 - 134 ini
    // Okay dari increment dulu, inc sendiri itu kayak penambahan, cmn klo misal tadi ada shorthand a += 2
    // Untuk nambah 1 itu lebih simplenya lagi a++
    // tapi, ada bedanya klo misal peletakan ++ nya di kiri (sebelum), atau kanan (setelah) a
    // gampangnya kita visualisasi gini
    // klo misal sebelum, itu kan berarti ++a, berarti dia nambah dulu, baru a, a ini artinya tampilkan (inilah pre increment)
    // klo misal setelah, a++, berarti tampilkan dulu a nya apa, baru tambahkan (inilah post increment)

    // klo uda ngerti ini, untuk decrement implementasinya juga sama, bedanya ngurang aja
}
