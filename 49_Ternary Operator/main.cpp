#include <iostream>
#include <string>

using namespace std;

//Ternary Operator
//variabel = (kondisi) ? hasil1 : hasil2
//bentuk boolean 

int main(){
    int nilaimahasiswa, b;
    string lulus, tidaklulus, output;
    
    cout << "Masukkan Nilai kamu : ";
    cin >> nilaimahasiswa;
    
    lulus = "Selamat anda dinyatakan lulus :)";
    tidaklulus = "Maaf anda belum lulus dan harus mengulang sks pada semester berikutnya";
    output = (nilaimahasiswa > 7) ? lulus : tidaklulus;

    cout << output << endl; 



    return 0;
}
