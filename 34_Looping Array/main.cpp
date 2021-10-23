#include <iostream>
#include <array>

using namespace std;
//looping untuk khusus array mulai c++11 ke atas
int main (){
    array <int, 10> arraynilaisiswa = {1,2,3,4,5,6,7,8,9,10};
    //contoh looping array dari fungsi looping biasa
    for (int i=0; i < arraynilaisiswa.size(); i++) {
        cout << arraynilaisiswa[i] << endl;
    } //memakai looping biasa tetap bisa namun tidak tahu batas array
    //batas komponen array pada looping harus diisi manual
    //hati hati karena looping biasa dapat mengakses memory diluar anggota array dengan nilai acak 
    //contoh looping khusus array dengan bentuk fungsi for (deklarasi variabel : namaarray)
    for (int nilaisiswa : arraynilaisiswa) //looping ini akan mencetak sebanyak berapa banyak komponen dalam array jika 10 berarti 10 kali looping
    {nilaisiswa += 12; 
        //jadi proses yang terjadi looping 1 : nilaisiswacetak =1 looping 2 : nilaisiswacetak = 2 dst
        cout << "address nilaisiswa : " << &nilaisiswa  << " nilai : " << nilaisiswa << endl;//variabel ini hanya memiliki 1 address yang digunakan untuk menampung nilai komponen array // akan looping nilai = 3 sebanyak 10 kali
         //tidak mengubah nilai array
    }
     for (int &nilaisiswa : arraynilaisiswa) //untuk mengubah nilai dapat menggunakan referencing yaitu sharing address jadi address tiap looping nilai siswa = adress array
    {
        nilaisiswa += 12; 
        //jadi proses yang terjadi looping 1 : nilaisiswacetak =1 looping 2 : nilaisiswacetak = 2 dst
        cout << "address nilaisiswa : " << &nilaisiswa  << " nilai : "  << nilaisiswa << endl;//variabel ini hanya memiliki 1 address yang digunakan untuk menampung nilai komponen array // akan looping nilai = 3 sebanyak 10 kali
         //tidak mengubah nilai array
    }
    return 0;
}
