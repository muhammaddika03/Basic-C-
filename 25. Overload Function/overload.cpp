#include <iostream>

using namespace std;

//overload function menempa fungsi satu dengan yang lain dengan kata lain mempunyai nama fungsi yang sama
int kelilingsegitiga (int sisi1,int sisi2,int sisi3){
    int k;
    k = sisi1 + sisi2 + sisi3;
    return k;
} //segitiga sembarang

int kelilingsegitiga (int sisi){
    int k;
    k = sisi * 3;
    return k;
} //segitiga sama sisi

int kelilingsegitiga (int sisi1, int sisi2){
    int k;
    k = sisi1 + sisi2 + sisi2;
    return k;
} //segitiga sama kaki
int main(){
    cout << "Hasil keliling segitiga sembarang : " << kelilingsegitiga (3,4,5)<< endl;
    cout << "Hasil keliling segitiga sama sisi : " << kelilingsegitiga (5)<< endl;
    cout << "Hasil keliling segitiga sama kaki : " << kelilingsegitiga (5,6)<< endl;
    return 0;
}
