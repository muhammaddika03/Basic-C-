#include <iostream>

using namespace std;

int main ()
{
    float a, b;
    char lambang;

    cout << "Selamat datang di calculator sederhana :)\n";
    cout << "Masukkan nilai 1: ";
    cin >> a;
    cout << "Masukkan operator +, -, *, /: ";
    cin >> lambang;
    cout << "Masukkan nilai 2: ";
    cin >> b;

    switch (lambang)
    {
        case '+':
        cout << a << " + " << b << " = " << a + b << endl;
        break;
        case '-':
        cout << a << " - " << b << " = " << a + b << endl;
        break;
        case '*':
        cout << a << " * " << b << " = " << a * b << endl;
        break;
        case '/':
        cout << a << " / " << b << " = " << a + b << endl;
        break;
        default:
        cout << "Mohon masukkan operator dengan benar" << endl;
    }
    cout << "Ini akhir program calculator sederhana \n";
    cout << "Selamat menikmati" << endl;
    return 0;
}