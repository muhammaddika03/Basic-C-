#include <iostream>
#include <limits>

using namespace std;

int main()
{
    long long a=1;
    cout << a << endl;
    cout << sizeof(a) << " byte" << endl; //untuk menampilkan besar tipe data
    cout << numeric_limits<long long>::max() << endl; //untuk menampikan batas jumlah angka maksimal yang dapat diinput tipe data 
    cout << numeric_limits<long long>::min() << endl; ////untuk menampikan batas jumlah angka minimal yang dapat diinput tipe data 
    cin.get();
    return 0;
}