#include <iostream>
#include <string>

using namespace std;

int main(){
    string nama, lahir, umur, goldarah, gender;
    string kalimat;
    for (int i=1 ; i <= 10; i++){
        cout << "=";
    }
    
    cout << "DATA DIRI KEPENDUDUKAN";

    for (int i=1 ; i <= 10; i++){
        cout << "=";
    }
    cout << endl;
    
    cout << "Masukkan kalimat : ";
    getline (cin, kalimat);
    cout << "Masukkan nama lengkap : ";
    getline (cin, nama);
    cout << "Masukkan tempat tanggal lahir :";
    getline (cin, lahir);
    cout << "Masukkan umur :";
    cin >> umur;
    cout << "Masukkan gol darah :";
    cin >> goldarah;
    cout << "Masukkan jenis kelamin :";
    cin >> gender;
    
    cout << endl << endl;

    cout << "Kalimat : " << kalimat << endl;
    cout << "Nama : " << nama << endl;
    cout << "Tempat & Tanggal Lahir : " << lahir << endl;
    cout << "Umur : " << umur << endl;
    cout << "Gol darah : " << goldarah << endl;
    cout << "Jenis Kelamin : " << gender << endl;
    
    //Menentukan posisi sebuah kata dalam kalimat posisi jumlah kataa
    int posisi, posisi2;
    int jumlah = 0, jumlah2 = 0;
    cout << "Posisi karakter spasi ada pada index : ";
    while(true){
		posisi = kalimat.find("a",posisi + 1);
		jumlah++;
		if (posisi <= 0){
			break;
		}
        cout << posisi << " ";
    }
    cout << endl;
    cout << "jumlah kata : " << jumlah << endl << endl;

    return 0; 
}
