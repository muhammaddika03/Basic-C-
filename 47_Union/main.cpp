#include <iostream>
#include <array>
#include <string>

using namespace std;

//union menempatkan beberapa tipe data dalam memori yang sama, ukuran tipe data union mengikuti anggota tipe data terbesar
union tipedataunion {
    int a;
    float b;
};

int main (){
    tipedataunion nama; 
    nama.a = 123;
    nama.b = 12.5;

    cout << nama.a << endl;
    cout << nama.b << endl;
    
    nama.b += 21;
    cout << nama.a << endl;
    cout << nama.b << endl;


}
