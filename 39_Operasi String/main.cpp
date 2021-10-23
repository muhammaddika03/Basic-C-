#include <iostream>
#include <string>

using namespace std;

//operasi pada string
int main(){
    string kata ("mobil");
    //menampilkan karakter ke console
    cout << kata << endl;
    //mengambil karakter berdasarkan index
    for (int i = 0; i < 5; i++){
        cout << "Index ke-" << i << " : " << kata [i] << endl;
    }
    //merubah karakter pada index
    kata [3] = 'a';
    //menyambung kata
    string kata2 (kata + " mantab");
    cout << kata2 << endl;

    string kata3 ("jiwa");
    kata2.append (" " + kata3);
    cout << kata2 << endl;

    string kata4 (" sekali");
    kata2 += kata4;
    cout << kata2 << endl;

    return 0;
}
