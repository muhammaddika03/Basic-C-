#include <iostream>
#include <string>

using namespace std;

struct spek{
    string processor, kamera, layar; 
};

struct serixiaomi{
    string seri, bulanrilis;
    //struct spesifikasi
    spek model1, model2;
};



int main(){
    serixiaomi hpdika1, hpdika2;
    spek redmi1, redmi2;

    //struct spek Redmi Note 10
    redmi1.processor = "Qualcomm Snapdragon 678";
    redmi1.kamera = "48MP Quad Camera";
    redmi1.layar = "6.43 Inc Super Amoled 1080p 60Hz";

    //struct spek Redmi Note 10 PRO
    redmi2.processor = "Qualcomm Snapdragon 732G";
    redmi2.kamera = "108MP Quad Camera";
    redmi2.layar = "6.43 Inc Super Amoled 1080p 120Hz";

    //struct hpdika1
    hpdika1.seri = "Xiaomi Redmi Note 10";
    hpdika1.bulanrilis = "6 bulan lalu";
    hpdika1.model1 = redmi1;

    //struct hpdika2
    hpdika2.seri = "Xiaomi Redmi Note 10 pro";
    hpdika2.bulanrilis = "6 bulan lalu";
    hpdika2.model2 = redmi2;
    
    //main struct hp 1
    cout << hpdika1.seri << endl;
    cout << hpdika1.bulanrilis << endl << endl;

     //main struct hp 2
    cout << hpdika2.seri << endl;
    cout << hpdika2.bulanrilis << endl << endl;
    
    //sub struct hp 1
    cout << hpdika1.model1.processor << endl;
    cout << hpdika1.model1.kamera << endl;
    cout << hpdika1.model1.layar << endl << endl;
    
     //sub struct hp 2
    cout << hpdika2.model2.processor << endl;
    cout << hpdika2.model2.kamera << endl;
    cout << hpdika2.model2.layar << endl << endl;
    return 0;
}