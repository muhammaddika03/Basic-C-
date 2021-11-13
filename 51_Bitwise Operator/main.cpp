#include <iostream>
#include <bitset>
#include <string>

using namespace std;

void printbinary (int val, string namaval){
    cout << namaval << " = " << bitset<8>(val) << endl;
}
int main (){

    unsigned short x = 17;
    unsigned short a = 21;
    unsigned short b = 15;
    unsigned short c;

    //bitwise mengeluarkan nilai suatu variabel dengan menggunakan nilai bilangan pangkat bit biner dimulai dari pangkat kanan 2 pangkat 0
    printbinary (x, "x");
    printbinary (a, "a");
    printbinary (b, "b");
    cout << endl;

    cout << "operator bitwise and (&)" << endl; //kedua duanya 1 berarti menjadi 1 keduanya
    c = a&b;
    printbinary (a, "a"); //bilangan biner
    printbinary (b, "b");
    printbinary (c, "c");
    cout << a << endl;
    cout << b << endl;
    cout << c << endl << endl; //hasil dari pengolahan nilai dari bilangan biner bit c

    cout << "operator bitwise or (|)" << endl;//kedua duanya 1 maupun salah satu berarti menjadi 1 keduanya
    c = a|b;
    printbinary (a, "a"); //bilangan biner
    printbinary (b, "b");
    printbinary (c, "c");
    cout << a << endl;
    cout << b << endl;
    cout << c << endl << endl; //hasil dari pengolahan nilai dari bilangan biner bit c

    cout << "operator bitwise eksklusif or (^)" << endl; //kedua duanya 1 keduanya menjadi 0, salah satu nilai bit 1 berarti menjadi 1 keduanya
    c = a^b;
    printbinary (a, "a"); //bilangan biner
    printbinary (b, "b");
    printbinary (c, "c");
    cout << a << endl;
    cout << b << endl;
    cout << c << endl << endl; //hasil dari pengolahan nilai dari bilangan biner bit c

    cout << "operator bitwise negasi (~)" << endl; //nilai bit berkebalikan, jika nilai bit 1 menjadi 0 dan 0 menjadi 1
    c = ~a;
    printbinary (a, "a"); //bilangan biner
    printbinary (c, "c");
    cout << a << endl;
    cout << c << endl << endl; //hasil dari pengolahan nilai dari bilangan biner bit c

    cout << "operator bitwise shift left (<<)" << endl; //menggeser nilai bit 1 ke kiri sebanyak x satuan / yang diinginkan
    c = a << 2;
    printbinary (a, "a"); //bilangan biner
    printbinary (c, "c");
    cout << a << endl;
    cout << c << endl << endl; //hasil dari pengolahan nilai dari bilangan biner bit c

    cout << "operator bitwise shift right (>>)" << endl; //menggeser nilai bit 1 ke kanan sebanyak x satuan / yang diinginkan
    c = a >> 1; //jika melebihi bit yang ada pada address ini nilai bit akan dipindah ke address selanjutnya
    printbinary (a, "a"); //bilangan biner
    printbinary (c, "c");
    cout << a << endl;
    cout << c << endl << endl; //hasil dari pengolahan nilai dari bilangan biner bit c
    return 0;
}
