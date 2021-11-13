#include <iostream>
#include <string>

using namespace std;

int main(){
    string nama;
    string ttl;
    int umuradik;
    int umurkakak;
    int totalumur;

    cout << "Masukkan nama : ";
    getline (cin,nama);
    cout << "Masukkan ttl : ";
    getline (cin, ttl);

    totalumur = (cout << "Nama anda : " << nama << endl, umuradik = 12, cout << umuradik << endl, umurkakak = 18, cout << umurkakak << endl, (umuradik+umurkakak));

    cout << totalumur << endl;

    return 0;
}
