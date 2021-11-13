#include <iostream>
#include <string>

using namespace std;
//casting operator
//operator yang memaksa pindah tipe data 1 ke yang lain dengan operator (tipedata) variabel

int main (){
    char a= 'b';
    float b = 12.23;
    float c = 13.37;
    float d;
    d = (int) b+ (int) c; //merubah tipedata float menjadi int, (int) b berarti merubah float b menjadi int b dan c pun begitu
    cout << (int)a << endl << endl; //merubah tipe data yang sebelumnya char menjadi int
    cout << d << endl;
    return 0;

}
