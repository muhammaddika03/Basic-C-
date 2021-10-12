#include <iostream>
#include <iostream>

using namespace std;
//jenis jenis komparasi
int main()
{
    int a = 1;
    int b = 2;
    bool hasil; //untuk menampilkan hasil benar atau salah

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    cout << "Jika 1 bernilai true dan 0 bernilai false" << endl;

    //kurang dari
    hasil = a < b;
    cout << "a < b: " << hasil << endl;
    //lebih dari
     hasil = a > b;
    cout << "a > b: " << hasil << endl;
    //kurang dari sama dengan
     hasil = a <= b;
    cout << "a <= b: " << hasil << endl;
    //lebih dari sama dengan
     hasil = a >= b;
    cout << "a >= b: " << hasil << endl;
    //sama dengan
     hasil = a == b;
    cout << "a == b: " << hasil << endl;
    //tidak sama dengan atau punya nilai yang berbeda
     hasil = a != b;
    cout << "a != b: " << hasil << endl;

    return 0;
}
