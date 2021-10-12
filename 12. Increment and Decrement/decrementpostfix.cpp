#include <iostream>

using namespace std;

int main()
{
    int x = 12, y = 15;

     //decrement postfix or postincrement
    cout << "nilai x awal: " << x << endl;
    cout << "Proses menurunkan nilai x: " << x-- << endl; // proses x-1 jadi nilai x diprint dulu baru dikurang 1 dan diprint lagi dinilai akhir
    cout << "nilai x akhir: " << x << endl << endl; //nilai akhir

    cout << "nilai y awal: " << y << endl;
    cout << "Proses menurunkan nilai y: " << y-- << endl;
    cout << "nilai y akhir: " << y << endl << endl;

return 0;
}
