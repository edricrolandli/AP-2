#include <stdio.h> // header untuk C
#include <conio.h> // sama seperti C++, untuk sekawanan sejenis getche getch

// okay... codingannya gajauh beda sama yang C++, agak bingung juga jelasin ulang gimana
int main() { // intinya main kode, yang di dalam ini nanti semua akan di execute / jalankan programnya
    char nama[50]; // deklarasi variable "nama", tipe datanya char, tapi ini sebenarnya kumpulan karakter yang memiliki panjang 50 karakter gitu
    int nim; // deklarasi variable "nim" dalam bentuk int
    char kom[2]; // sama seperti "nama", tapi bedanya ini kapasitas panjangnya 2
    float ip; // deklarasi "ip" dalam bentuk float (angka desimal)

    printf("Hello World\n"); // fungsi keluaran pada C

    printf("Masukkan nama : "); // printf di C itu sama kayak cout di cpp
    gets(nama); // get string, sama seperti cin di cpp untuk ngambil inputan user

    printf("Masukkan nim : "); 
    scanf("%d", &nim); // fungsi masukan pada C, kali ini inputannya pakai scanf, jadi agak beda dengan cpp, disini harus deklarasi pakai "%d" dulu baru & diikuti nama variablenyaa

    getchar(); // ambil karakter newline yang tersisa di buffer setelah scanf()

    // ini masih sama
    printf("Masukkan kom : ");
    gets(kom); 

    printf("Masukkan ip : ");
    scanf("%f", &ip); // nah kalau tadi %d untuk bilangan biasa, ini karena float jadi pakai %f

    /* Untuk Output */
    printf("Nama : ");
    puts(nama); // put string, digunakan untuk string dalam bentuk array char

    printf("NIM : %d\n", nim); // even di C ribet yah outputnya, jadi klo misal mau tampilin apa yang udah di input tadi, itu tuh harus pakai %d lagi gitu, baru diikuti koma, dan nama variable
    // gampangnya ("%d", nama_var)

    printf("KOM : "); 
    puts(kom); // yap jadi ini pasangan dari gets, yaitu puts, mirip getche putchar di cpp
    printf("IP : %f\n", ip); // sama yaa seperti yang nim, bedanya pakai %f

    printf("press any button to continue...");
    getch(); // ini biar gak langsung end programnya, jadi getch nunggu user teken tombol (apapun) baru end
}
