#include <iostream>
#include <limits>

using namespace std;

int main()
{
    double a=124;
    cout << a << endl;
    cout << sizeof(a) << " byte" << endl; //untuk menampilkan besar tipe data int
    cout << numeric_limits<double>::max() << endl; //untuk menampikan batas jumlah angka maksimal yang dapat diinput tipe data int
    cout << numeric_limits<double>::min() << endl; ////untuk menampikan batas jumlah angka minimal yang dapat diinput tipe data int
    cin.get();
    return 0;
}