#include <iostream>
#include <array>

using namespace std;

int main(){

    string kalimat_1 ("Aku bersekolah di SMAN 2 Kota Kediri");
    string kalimat_2 ("Aku suka genre action");

    cout << "Kalimat 1 : " << kalimat_1 << endl;
    cout << "Kalimat 2 : " << kalimat_2 << endl << endl;

    //swap kalimat 1 ke kalimat 2 (swap string)
    kalimat_1.swap(kalimat_2);
    cout << "Swap kalimat" << endl;
    cout << "Kalimat 1 : " << kalimat_1 << endl;
    cout << "Kalimat 2 : " << kalimat_2 << endl << endl;
    
    //replace, mengganti string
    cout << "replace string" << endl;
    //dengan index
    cout << kalimat_2.find("S")<< endl;
    kalimat_2.replace(18, 18, "SMPN 1 Kota Kediri");
    cout << "Kalimat 2 diganti menjadi : " << kalimat_2 << endl << endl;

    //dengan langsung mencari posisi dari substring
    kalimat_2.replace(kalimat_2.find("SMPN 1 Kota Kediri"),18, "SDN Burengan 1" );
    cout << "Kalimat 2 diganti menjadi : " << kalimat_2 << endl << endl;
    
    //insert string
    cout << "insert string" << endl;
    kalimat_1.insert(kalimat_1.find("action"), "horror & ");
    cout << "kalimat 1 ditambah kata menjadi : " << kalimat_1 << endl;
    return 0;

}
