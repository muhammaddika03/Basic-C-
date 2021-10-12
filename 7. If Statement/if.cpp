#include <iostream>

using namespace std;

int main ()
{
    string nama;

    //if statement 
    /*dalam bentuk boolean
    jika bernilai benar atau bernilai > 0 maka statement akan diproses
    jika bernilai salah atau bernilai 0 maka statement tidak akan diproses*/

    cout << "==============SELEKSI BERKAS ADIMINISTRASI============== \n";

    cout << "Masukkan password anda: ";
    cin >> nama;

    if (nama == "Muhammad")
    {
        cout << "Selamat pass anda benar dan lulus seleksi administrasi :)"<< endl;
    }

    if (nama != "Muhammad")
    {
        cout << "Maaf pass anda masih salah dan tidak lulus seleksi administrasi :(" <<  endl;
    }

   cout << "Terimakasih telah berpartisipasi dalam seleksi ini\n";
   cout << "Anda akan mendapatkan e-certificate" << endl;

   return 0;
}
