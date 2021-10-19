#include <iostream>
#include <array> //std library for array

using namespace std;

int main()
{
    //deklarasi array dengan menggunakan std library
    //array < tipedata , jumlahkomponenarray > namaarray
    array < int , 6 > nilai = {87, 43, 53, 76, 74, 76};
    for (int i = 0; i < 6; i++) {
        cout << "nilai data ke-" << i+1 << " : " << nilai[i] << endl;
        cout << "address data : " << &nilai[i] << endl;
    } 
    cout << endl << endl;
    //dalam std array sendiri terdapat banyak fungsi array yang tidak bisa dilakukan oleh array tanpa std array atau biasa (iostream)
    //ukuran array panjang array jumlah komponen array
    cout << "jumlah komponen array : " << nilai.size() << endl;
    //address awal array
    cout << "address awal array : " << nilai.begin() << endl;
    //address akhir array
    cout << "address akhir array : " << nilai.end() << endl;
    //mengambil nilai suatu komponen
    cout << "nilai data ke-3 : " << nilai.at(2) << endl;
    return 0;
}
