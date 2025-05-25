# include <iostream>

using namespace std;

class contoh_akses
{
    private:
        int private_var;

    protected:
        int protected_var;

    public:
        int public_var;

        // Constructor (berguna agar ngeset tidak lngs di main program)
        contoh_akses()
        {
            private_var = 1;
            protected_var = 2;
            public_var = 3;
        }

    void tampilkan_semua()
    {
        cout << "Akses dari dalam class : " << endl;
        cout << private_var << endl;
        cout << protected_var << endl;
        cout << public_var << endl;
    }
};

// kelas turunan
class turunan : public contoh_akses
{
    public:
        void akses_protected()
        {
            cout << "Akses public_var = " << public_var << endl;
            cout << "Akses protected_var = " << protected_var << endl;
            // cout << "Akses private_var = " << private_var << endl;
        }
};

int main()
{
    system("CLS");

    contoh_akses objek;
    objek.tampilkan_semua();

    cout << "Akses dari luar class : " << endl;
    cout << objek.public_var << endl;
    // cout << objek.protected_var << endl; //error
    // cout << objek.private_var << endl; //error

    turunan tur;
    tur.akses_protected();

    // simplenya codingan ini sebenarnya untuk ngebuktiin kalau
    // public = var yg bisa diakses di manapun, termasuk di luar kelasnya
    // protected = var yg masih bisa di akses di kelasnya sendiri, maupun kelas turunannya
    // private = tingkat tertinggi, hanya bisa diakses di kelas sendiri saja, tidak bisa dimana pun
    // gampangnya yang pernah pakai drive or document di google
    // private itu literally restricted, protected juga restricted tapi masih di share khusus siapa aja editornya, klo public nah dibuka ke siapa aja yang memiliki link gitu
}
