#include <iostream>
#include <array>

using namespace std;

int main ()
{
//main.exe
    cout << "Selamat datang di pendataan nilai siswa sdn sukajaya 3" << endl;
    array < int, 20 > nilaisiswa;
    for (int i = 0; i < nilaisiswa.size(); i++){
        if (i == 0) {
        cout << "Masukkan nilai siswa " << i*5 << "-" << (5*i)+5 << "   : ";
        cin >> nilaisiswa[i];
        continue;
        }
        if (i == 1) {
        cout << "Masukkan nilai siswa " << i*5 << "-" << (5*i)+5 << "  : ";
        cin >> nilaisiswa[i];
        continue;
        } 
        if (i == 19) {
        cout << "Masukkan nilai siswa " << i*5 << "-" << (5*i)+5 << ": ";
        cin >> nilaisiswa[i];
        continue;
        } 
        cout << "Masukkan nilai siswa " << i*5 << "-" << (5*i)+5 << " : ";
        cin >> nilaisiswa[i];
        
    }
    cout << "Grafik nilai siswa " << endl;
    for (int i = 0; i < nilaisiswa.size(); i++){
        if (i == 0) {
        cout <<  i*5 << "-" << (5*i)+5 << "   : ";       
        continue;
        }
        if (i == 1) {
        cout  << i*5 << "-" << (5*i)+5 << "  : ";
        continue;
        } 
        cout << i*5 << "-" << (5*i)+5 << " : ";
        for (int j = 0; j <= nilaisiswa [i]; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
