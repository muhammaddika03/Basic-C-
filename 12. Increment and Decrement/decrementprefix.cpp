#include <iostream>

using namespace std;

int main()
{
    int x = 12, y = 15;

    //increment prefix or preincrement
    cout << "nilai x awal: " << x << endl;
    cout << "Proses menurunkan nilai x: " << --x << endl; //proses 1+x jadi nilai 1+x langsung diproses di awal baru diprint di baris ini
    cout << "nilai x akhir: " << x << endl << endl;//hasil decrement

    cout << "nilai y awal: " << y << endl;
    cout << "Proses menurunkan nilai y: " << --y << endl;
    cout << "nilai y akhir: " << y << endl << endl;

return 0;
}