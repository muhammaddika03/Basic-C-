#include <iostream>

using namespace std;

//fungsi dengan pointer memakai void karena variabel pointer sendiri tidak memiliki nilai melainkan hanya alamat
//fungsi dengan pointer akan merubah nilai variabel dalam int main
void pointer(int *b){
    cout << "alamat dari b asli : " << &b << endl; //pointer juga memiliki address sendiri untuk menyimpan address variabel lain
    cout << "alamat dari b yang dirujuk : " << b << endl;
    cout << "nilai dari b : " << *b << endl; //untuk memanggil nilai dari variabel pointer harus ditambahi dengan tanda *
}
//kuadrat
void pointerkuadrat(int *a){
    *a = *a * *a;
    cout << "alamat dari a : " << a << endl;
    cout << "nilai dari a : " << *a << endl; //untuk memanggil nilai dari variabel pointer harus ditambahi dengan tanda *
}


int main (){
    int x = 20;
    cout << "alamat dari x : " << &x << endl;
    cout << "nilai dari x : " << x << endl;
    pointer (&x); //int *b = &x; variabel b memiliki address dari variabel x dengan begitu b dapat mengambil nilai dari x
    pointerkuadrat(&x);
    return 0;
}
