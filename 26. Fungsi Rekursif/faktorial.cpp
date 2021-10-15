#include <iostream>

using namespace std;

int fungsirekursifpangkat (int x)
{
    if (x == 1){
        return x;
    }
    return x * fungsirekursifpangkat (x-1);
}

int main()
{
    int x;
    cout << "Masukkan nilai angka (x): ";
    cin >> x;

    cout << "Hasil dari Fungsi Rekursif faktorial " << x << " : " << fungsirekursifpangkat(x) << endl;
    return 0;
}
