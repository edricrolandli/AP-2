# include <iostream>
# include <string.h>

using namespace std;

struct mahasiswa // struct ini mirip array, tapi bisa berisi tipe data yang berbeda" atau di pascal itu record 
{
    string nama;
    int umur;
    float ipk;
};

// di sini contoh mahasiswa, jadi bisa berisi beragam, dari nama (string), umur (int), dan ipk (float)
// notes, sebagai pembeda, struct harus ditutup dengan ";"

int main()
{
    system("CLS");

    mahasiswa mhs1;
    // inget tak pas deklarasi variable normal? strukturnya tipe_data nama_variable
    // nah disini juga berlaku hal yang sama, struct dianggap sebagai tipe_data
    // mahasiswa = tipe_data
    // mhs1 = nama_variable
    // jadi kita punya variable "mhs1" yang bisa diisi nama, umur, dan ipk

    mhs1.nama = "Edric";
    mhs1.umur = 19;
    mhs1.ipk = 4.00;

    // tapi, cara aksesnya itu berbeda, yaa biar bedain sama variable biasa juga kan ya
    // caranya itu harus state nama_variable dari mahasiswa itu dulu, yaitu mhs1
    // baru diikuti tanda titik, sisanya sama sih

    // cout << "Nama = " << mhs1.nama << endl;
    // cout << "Umur = " << mhs1.umur << endl;
    // cout << "IPK = " << mhs1.ipk << endl;

    // pas pemanggilan juga sama seperti input, mhs1. dulu

    mahasiswa *ptr_mhs = &mhs1;
    cout << "Nama = " << ptr_mhs -> nama << endl;
    cout << "Umur = " << ptr_mhs -> umur << endl;
    cout << "IPK = " << ptr_mhs -> ipk << endl;

    // penggunaan pointer dalam struct itu mirip ya konsepnya dgn pointer biasa
    // inget * itu isi, jadi kita pengen ngisi isinya dengan &, yaitu alamat dari mhs1 
    // nah pas manggil buat tampilkan juga sama, tapi khusus pointer itu pakai -> sebagai pengganti titik (.), dgn ini kita bisa tampilkan nilai dari isi alamat tersebut (inget karena tadi diarahkan ke &mhs1 kan)
}
