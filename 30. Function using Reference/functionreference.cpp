#include <iostream>

using namespace std;


void pointer(int &b){
    cout << "alamat dari b : " << &b << endl;
    cout << "nilai dari b : " << b << endl; 
}
//kuadrat
void pointerkuadrat(int &a){
    a = a * a;
    cout << "alamat dari a : " << &a << endl;
    cout << "nilai dari a : " << a << endl; 
}


int main (){
    int x = 20;
    cout << "alamat dari x : " << &x << endl;
    cout << "nilai dari x : " << x << endl;
    pointer (x); 
    pointerkuadrat(x);
    return 0;
}
