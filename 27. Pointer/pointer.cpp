#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int *aptr = &a; //variabel pointer yaitu variabel penanda atau penunjuk dari alamat suatu variabel
    // variabel pointer *aptr mempunyai alamat variabel a

    cout << "Nilai dari a : " << a << endl; //nilai dari variabel a
    cout << "Alamat atau address dari a : " << &a << endl; //&a merupakan perintah untuk menampilkan alamat dari variabel a
    cout << "Alamat atau address dari a dari pointer atau penunjuk : " << aptr << endl; //menunjukkan alamat variabel a dari pointer variabel aptr
    cout << "Nilai dari pointer aptr : " << *aptr << endl; //mengeluarkan nilai dari pointer aptr yang diambil dari alamat asal yaitu variabel a
    return 0;
}
