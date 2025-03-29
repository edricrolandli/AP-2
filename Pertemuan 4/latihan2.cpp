# include <iostream>
using namespace std;

int main(){
    string kalimat;
    int i;

    system("CLS");

    cout << "Masukkan kalimat : "; getline(cin, kalimat);

    for (i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] == 'a' || kalimat[i] == 'e' || kalimat[i] == 'i' || kalimat[i] == 'o' || kalimat[i] == 'u')
        {
            kalimat[i] = toupper(kalimat[i]);
        }
    }

    cout << "Kalimat dalam huruf kapital : "  << kalimat << endl;

    return 0;
}