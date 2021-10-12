#include <iostream>
#include <cstdlib> //library untuk fungsi math random

using namespace std;

int main()
{    
    string dadu;
    cout << "===============Selamat datang di program latihan dadu acak===============\n";
   

    while (true)
    {
        cout << "Apakah anda ingin melempar dadu(ya/tidak): ";
        cin >> dadu;
        if (dadu == "ya")
        {
            cout << "Dadu yang keluar : " << rand() % 7 << endl;
        }
        else if (dadu == "tidak")
        {
            break;
        }
        else
        {
            cout << "Silakan masukkan input yang benar ya ;v\n"; 
        }
    }
    cout << "Ini adalah akhir program latihan dadu acak \n";
    return 0;
}
