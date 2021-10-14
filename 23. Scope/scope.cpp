#include <iostream>

using namespace std;

int a = 12; //global scope

int globalscope (){
    return a;
}
//nilai fungsi local tidak mempengaruhi nilai global scope diatasnya dengan arti jika dipanggil dengan a nilai akan tetap a = 12
int localfungsi (){
    int a = 11;
    return a;
}

int main(){
    cout << "Nilai global scope : " << a << endl;
    int a = 2; //local scope
    cout << "Nilai local main : " << a << endl;
    cout << "Nilai global scope yang diambil dari fungsi : " << globalscope() << endl; //nilai a global tidak menindih nilai a local main
    cout << "Nilai local main : " << a << endl; //nilai tetap a = 2
    cout << "Nilai local diambil dari fungsi : " << localfungsi() << endl;
    cout << "Nilai local main : " << a << endl;
    return 0; 
}
