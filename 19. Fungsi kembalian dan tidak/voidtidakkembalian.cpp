#include <iostream>

using namespace std;

int fungsi (int x, int r)
{
    int y;
    y = (x * x) % r;
    return y;
}
int fungsi2 (int r, int t)
{
    int c;
    float phi = 3.14;
    c = phi * r * r * t;
    return c;
}

void cumancetakan (int hasil )
{
    
    cout << "Hasil dari luas permukaan tabung : "<< hasil << endl;
}
int main ()
{
    
    int hasil, r, t, hasil1, q, p;

    cout << "Masukkan nilai jari jari : ";
    cin >> r;
    cout << "Masukkan nilai tinggi tabung : ";
    cin >> t;

    hasil = fungsi2 (r, t);
    
    cumancetakan (hasil);
    
    cout << "Memang anda mantab dalam hal lingkaran. \n";
    cout << "Lanjut ke part selanjutnya.\n\n ";

    cout << "Masukkan nilai q = ";
    cin >> q;
    cout << "Masukkan nilai p = ";
    cin >> p;
    
    hasil1 = fungsi (q, p);
    
    cout << "Hasil dari perkalian dan modulus adalah : " << hasil1 << endl;
    return 0;
}