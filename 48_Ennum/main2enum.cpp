#include <iostream>
#include <string>

using namespace std;

enum buah {apel=12, jeruk, pir, anggur};

int main(){
    buah punyadika;
    punyadika = apel;
    
    if (punyadika == apel){
        cout << "Buah yang dipunya dika sekarang adalah apel" << endl;
    }
    //yang dikeluarkan adalah index dari enum buah sama dengan array
    cout << punyadika << endl;//index apel berubah dari 0 menjadi 12

    return 0;
}