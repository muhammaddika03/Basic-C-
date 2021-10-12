#include <iostream>

using namespace std;

int main ()
{
    char iya;
//

    cout << "==============SELEKSI BERKAS ADIMINISTRASI============== \n";

    cout << "Masukkan password anda: ";
    cin >> iya;

    switch (iya)
    {
        case 'A' :
        cout << "Selamat pass anda benar dan lulus seleksi administrasi :)"<< endl;
        cout << "Terimakasih telah berpartisipasi dalam seleksi ini\n";
        cout << "Anda akan mendapatkan e-certificate" << endl;
        cout << "Dan anda akan diterima di universitas selokan" << endl;
        break;
        case 'B' :
        cout << "Sayangnya pass anda kurang sedikit lagi benar ditingkatkan lagi ya" << endl;
        cout << "Terimakasih telah berpartisipasi dalam seleksi ini\n";
        cout << "Anda akan mendapatkan e-certificate" << endl;
        break;
        case 'C' :
        cout << "Wah pass anda kurang dikit lagi benar tapi boong" << endl;
        cout << "Terimakasih telah berpartisipasi dalam seleksi ini\n";
        cout << "Anda akan mendapatkan e-certificate" << endl;
        break;
        default :
        cout << "Maaf pass anda masih salah dan tidak lulus seleksi administrasi :(" <<  endl;
        cout << "Terimakasih telah berpartisipasi dalam seleksi ini\n";
        cout << "Anda akan mendapatkan e-certificate" << endl;
    }
    return 0;
    }
