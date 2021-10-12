#include <iostream>

using namespace std;

int main()
{
    short a, b, c;
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    c = a % b;
    cout << "a % b: " << c << endl;
    return 0;
}