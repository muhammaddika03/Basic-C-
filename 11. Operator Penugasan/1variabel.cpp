#include <iostream>

using namespace std;

int main()
{
    int x = 12;
    //contoh assignment x = 12 yang berarti memasukkan nilai 12 ke dalam variabel x
    /*operator assignnment gabungan yaitu melakukan operasi ke variabel itu sendiri dengan suatu nilai atau variabel lain*/
    
    cout << "Nilai awal x adalah: " << x << endl;
    //penjumlahan
    x+=13;
    cout << "Nilai x setelah tambah 13: " << x << endl;
    //pengurangan
    x-=10;
    cout << "Nilai x setelah kurang 10: " << x << endl;
    //perkalian
    x*=3;
    cout << "Nilai x setelah kali 3: " << x << endl;
    //pembagian
    x/=5;
    cout << "Nilai x setelah bagi 5: " << x << endl;

    return 0;
}
