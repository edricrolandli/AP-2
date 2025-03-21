# include <iostream>
using namespace std;

int main(){
    int nilai;

    system("CLS");

    cout << "Masukkan bilangan bulat : "; cin >> nilai;

    if (nilai % 5 == 0 && nilai % 10 == 0)
    {
        cout << "Bilangan habis dibagi 5 dan 10" << endl;
    }
    else
    {
        if (nilai % 5 == 0)
        {
            cout << "Bilangan habis dibagi 5" << endl;
        }
        else if (nilai % 10 == 0)
        {
            cout << "Bilangan habis dibagi 10" << endl;
        }
        else
        {
            cout << "Bilangan tidak habis dibagi keduanya";
        }
    }
}