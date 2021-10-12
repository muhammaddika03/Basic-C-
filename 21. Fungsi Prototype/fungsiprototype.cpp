#include <iostream>

using namespace std;

int volume (int p, int l, int t);
int luas_permukaan (int p, int l, int t);

int main ()
{
    int hasilvolume, hasilluaspermukaan, panjang, lebar, tinggi;

    cout << "Masukkan nilai panjang : ";
    cin >> panjang;
    cout << "Masukkan nilai lebar : ";
    cin >> lebar;
    cout << "Masukkan nilai tinggi : ";
    cin >> tinggi;

    hasilvolume = volume (panjang, lebar, tinggi);
    cout << "Hasil volume balok : " << hasilvolume << endl;

    hasilluaspermukaan = luas_permukaan (panjang, lebar, tinggi);
    cout << "Hasil luas permukaan balok : " << hasilluaspermukaan << endl;

    return 0;
}

int volume (int p, int l, int t)
{
    int v;
    v = p * l * t;
    return v;
}

int luas_permukaan (int p, int l, int t)
{
    int lp;
    lp = (2 * p * l) + (2 * p * t) + (2 * l * t);
    return lp; 
}
