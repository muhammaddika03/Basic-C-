#include <iostream>

using namespace std;

int fungsirekursifpangkat (int x,int y)
{
    if (y == 1){
        return x;
    }
    return x * fungsirekursifpangkat (x, (y-1));
}

int main()
{
    int x,y;
    cout << "Masukkan nilai angka (x): ";
    cin >> x;
    cout << "Masukkan nilai pangkat (y): ";
    cin >> y;

    cout << "Hasil dari Fungsi Rekursif " << x << " pangkat " << y << " : " << fungsirekursifpangkat(x,y) << endl;
    return 0;
}