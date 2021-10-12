#include <iostream>
#include <limits>

using namespace std;

int main()
{
    unsigned int a=2147483652;
    cout << a << endl;
    cout << sizeof(a) << " byte" << endl; //untuk menampilkan besar tipe data int
    cout << numeric_limits<unsigned int>::max() << endl; //untuk menampikan batas jumlah angka maksimal yang dapat diinput tipe data int
    cout << numeric_limits<unsigned int>::min() << endl; ////untuk menampikan batas jumlah angka minimal yang dapat diinput tipe data int
    cin.get();
    return 0;
}