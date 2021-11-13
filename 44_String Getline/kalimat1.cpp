#include <iostream>
#include <string>
#include <array>

using namespace std;

int main(){
    string kalimat;

    cout << "Masukkan kalimat : ";
    getline (cin, kalimat);
    
    int jumlah;
    cout << "karakter u ada pada indeks : ";
    for (int i = 0; i < kalimat.size() ; i++)
    {
        if (kalimat[i] == 'u'){
            cout << i << " ";
            jumlah++;
        }
    }
    cout << endl;
    cout << "jumlah karakter u : " << jumlah << endl;
    cout << "jumlah karakter : " << kalimat.size() << endl;
    return 0;
}