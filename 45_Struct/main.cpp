#include <iostream>
#include <string>

using namespace std;

struct nilaisiswa{
    int bin, bing, matematika, ipa, ratarata;
};

int main(){
    nilaisiswa dika;
    
    cout << "Masukkan nilai Bahasa Indonesia : ";
    cin >> dika.bin;
    cout << "Masukkan nilai Bahasa Inggris : ";
    cin >> dika.bing;
    cout << "Masukkan nilai Matematika : ";
    cin >> dika.matematika;
    cout << "Masukkan nilai IPA : ";
    cin >> dika.ipa;

    dika.ratarata = (dika.bin+dika.bing+dika.matematika+dika.ipa) / 4;

    cout << "Nilai rata rata anda : " << dika.ratarata << endl;
    
    if (dika.ratarata <= 75){
        cout << "Maaf anda tidak dinyatakan lulus " << endl;
    }
    else {
        cout << "Selamat anda dinyatakan lulus " << endl;
    }
    return 0;
}
