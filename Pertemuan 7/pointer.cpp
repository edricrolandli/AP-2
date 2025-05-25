// argh sudah sampai di pointer... semoga bisa dimengerti dengan perumpamaan"
# include <iostream>
using namespace std;

void penjumlahan(int a, int b)
{
    cout << a + b << endl;
}

void penjumlahan_pointer(int *a, int *b)
{
    *a += *b;
    cout << *a << endl;
}

int main()
{
    system("CLS");

    // Pointer declaration
    int number = 35; // anggaplah ini rumah nilai 35
    int *pointer_number = &number; // ini tuh alamatnya

    // Perumpamaan pointer yang diharapkan mudah dimengerti
    // number dan *pointer_number: isi rumah yang nilainya 35
    // &number dan pointer_number: alamat rumah yang berisi nilai 35

    // cout << "Isi variabel number = " << number << endl;
    // cout << "Alamat dari memori variabel number = " << &number << endl;
    // cout << "Isi variabel pointer_number = " << pointer_number << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    // cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;
    // cout << endl;

    // Pointer Operation = alamatnya sama, tapi nilai variabel (rumah) bisa kita ubah isinya
    /* *pointer_number = 25; */
    // cout << "Isi variabel number = " << number << endl;
    // cout << "Alamat dari memori variabel number = " << &number << endl;
    // cout << "Isi variabel pointer_number = " << pointer_number << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    // cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;
    // cout << endl;

    // Pointer in Array
    // int num[] = {1, 2, 3, 4, 5}; //secara default jika tidak ada disebut index keberapa maka 0
    // int *pointer_num = num;

    // Perumpamaan lagi
    // num[0] dan *pointer_num : isi rumahnya, tergantung indeks, intinya sama" berisi isi rumah
    // &num[] dan pointer_num : alamat rumah, tergantung indeks

    /* *pointer_num += 5; */
    // cout << "Isi variabel num = " << num[0] << endl;
    // cout << "Alamat dari memori variabel num = " << &num[0] << endl;
    // cout << "Alamat dari memori variabel num = " << &num[1] << endl;
    // cout << "Alamat dari memori variabel num = " << &num[2] << endl;
    // cout << "Alamat dari memori variabel num = " << &num[3] << endl;
    // cout << "Alamat dari memori variabel num = " << &num[4] << endl;
    // cout << "Isi variabel pointer_num = " << pointer_num << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    // cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;
    // cout << endl;

    // Pointer in Parameter
    // int num1 = 5;
    // int num2 = 7;
    // penjumlahan(num1, num2);

    // ini penjumlahan biasa kan ya, seperti pertemuan sebelumnya

    // cout << num1 << endl;
    // cout << num2 << endl;

    // penjumlahan_pointer(&num1, &num2);

    // nah ini bedanya kita pakai pointer, caranya ya intinya inget, pointer pasangannya adalah antara * (isi) dan & (alamat)
    // jadi awalnya yauda kita input alamatnya, nah di function atas, isinya tuh *, berarti isi dari alamatnya kan
    // yauda karena dia uda nyimpen alamat dari num1 dan num2, pas mau jumlahin, *a += *b, programnya tinggal ngintip
    // oh isi dari a (a tuh parameter, aktualnya ya num1 kan, yauda dia ngintip isi dari num1), rupanya 5, dst untuk b
    // maka hasilnya 12 sama seperti function biasa

    // cout << num1 << endl;
    // cout << num2 << endl;

    // Pointer in Pointer
    // int score = 4;
    // int *pointer_score = &score;
    // int **ptr_pointer_score = &pointer_score; // pointer in pointer

    // cout << "Isi variabel score = " << score << " dan alamat memorinya " << &score << endl;
    // cout << "Isi variabel pointer_score " << pointer_score << " dan isi variabel yang ditunjuk oleh pointer_score " << *pointer_score << " alamat memori pointer_score " << &pointer_score << endl;
    // cout << "Isi variabel ptr_pointer_score " << ptr_pointer_score << " dan isi variabel yang ditunjuk oleh ptr_pointer_score " << **ptr_pointer_score << " alamat memori pointer_score " << &ptr_pointer_score << endl;

    // makin ribet yah ternyata, tapi mari kita buat versi simple lagi
    // score : isi rumah, yaitu 4
    // *pointer_score: alamat rumah dari score, yang isinya 4
    // **ptr_pointer_score: alamat dari pointer_score 
    
    // bayangkannya tuh gini
    // **ptr_pointer_score -> *pointer_score -> score
    // jadi kayak nunjuk gitu loh, kesimpulannya yaa secara tak langsung **ptr_pointer_score pada akhirnya bisa akses si score juga (yang isinya 4)
    // karena panahnya searah kan, bisa nyampe kesana
    
    // Dynamic Pointer
    int *ptr = new int;
    *ptr = 30;

    cout << "Isi variabel ptr " << *ptr << " dan alamat " << &ptr << endl;

    delete ptr;
    cout << "Isi variabel ptr " << *ptr << " dan alamat " << &ptr << endl;

    // row 105, itu new istilahnya create laci baru nih
    // inget *ptr itu isinya nilai kan, nah di row 106 isinya 30

    // bayangkan sekarang ada laci, terus isinya 30

    // tapi kita bisa nih hapus isi si laci yang isinya 30 tadi, dengan delete
    // jadi ketika di delete, lacinya tetep ada, inget tetep ada, tapi isinya yang hilang
    // makanya alamatnya tetap tuh, karena yaa tetep mengarah ke laci, hanya aja isinya kosong, dan bisa diisi lagi
}
