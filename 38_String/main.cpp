#include <iostream>
#include <string>

using namespace std;

int main (){
    string kata ("mobil");
    string kata2, kalimat;
    cout << "kata yang terlihat : " << kata << endl;
    cout << "kata yang dimasukkan : ";
    cin >> kata2;
    cout << "kalimat yang dimasukkan : ";
    cin >> kalimat;
    getline (cin, kalimat);
    cout << "kata yang terlihat : " << kata2 << endl;
    cout << "kalimat yang terlihat : " << kalimat << endl;
    return 0;
}
