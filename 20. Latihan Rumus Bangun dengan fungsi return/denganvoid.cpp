#include <iostream>

using namespace std;

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

void hasilvolume (int p, int l, int t)
{
     cout << "Hasil volume balok : " << volume(p, l, t) << endl;
}

void hasillp (int p, int l, int t)
{
     cout << "Hasil volume balok : " << luas_permukaan(p, l, t) << endl;
}

int main ()
{
    int panjang, lebar, tinggi;

    cout << "Masukkan nilai panjang : ";
    cin >> panjang;
    cout << "Masukkan nilai lebar : ";
    cin >> lebar;
    cout << "Masukkan nilai tinggi : ";
    cin >> tinggi;

    hasilvolume (panjang, lebar, tinggi);
    hasillp (panjang, lebar, tinggi);
    

    return 0;
}

