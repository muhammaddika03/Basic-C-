#include <iostream>

using namespace std;

//reference
//menempatkan dua variabel atau lebih dalam satu alamat memori yang sama sehingga nilai yang dihasilkan antar variabel sama
int main(){
    int a = 15;
    int &b = a;
    cout << "Nilai dari a : " << a << endl;
    cout << "Alamat dari a : " << &a << endl;
    cout << "Nilai dari b : " << b << endl;
    cout << "Alamat dari b : " << &b << endl;

    b = 120;
    cout << "Nilai dari a : " << a << endl;
    cout << "Nilai dari b : " << b << endl;
    return 0;
}
