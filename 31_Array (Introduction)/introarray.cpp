#include <iostream>

using namespace std;

int main ()
{
    //array
    //suatu tempat yang menyimpan sekumpulan data atau komponen yang address tiap komponen di tempatkan secara berurutan / address berurutan
    int nilaisiswa [5] = {80, 76, 48, 73, 63}; //5 menyatakan bahwa terdapat 5 komponen dalam array nilai siswa
    // setiap komponen dalam array dikenal dengan index dan index array dimulai dengan 0 index dapat dikatakan juga sebagai nama suatu variabel dalam data tunggal yang menyimpan nilai
    cout << "address komponen 1 : " << &nilaisiswa [0] << " | Nilai dari komponen 1 : " << nilaisiswa [0] << endl; //&nilaisiswa merupakan adress dari sebuah komponen
    cout << "address komponen 1 : " << &nilaisiswa [1] << " | Nilai dari komponen 2 : " << nilaisiswa [1] << endl;
    cout << "address komponen 1 : " << &nilaisiswa [2] << " | Nilai dari komponen 3 : " << nilaisiswa [2] << endl;
    cout << "address komponen 1 : " << &nilaisiswa [3] << " | Nilai dari komponen 4 : " << nilaisiswa [3] << endl;
    cout << "address komponen 1 : " << &nilaisiswa [4] << " | Nilai dari komponen 5 : " << nilaisiswa [4] << endl;
    nilaisiswa [4] = 80;
    cout << "Nilai dari komponen 5 berubah menjadi : " << nilaisiswa [4] << endl;
    
    //untuk melihat jumlah komponen dalam array 
    cout << "ukuran data array ini : " << sizeof(nilaisiswa) << " byte" << endl; //ukuran total semua komponen atau variabel dalam array
    cout << "ukuran tiap komponen : "  << sizeof(int) << " byte" << endl; //ukuran per komponen yang bertipe data integer
    cout << "jumlah komponen : "  << sizeof(nilaisiswa) / sizeof(int) << endl;
    return 0;
}
