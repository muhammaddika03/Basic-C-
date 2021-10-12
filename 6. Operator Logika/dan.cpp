#include <iostream> 

using namespace std;

int main ()
{
   // operator logika dan
    int a= 12;
    int b= 13;
    bool hasil;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    hasil = (a == 12) && (b == 13); //true dan true
    cout << "hasil: " << hasil << endl;
    hasil = (a == 12) && (b == 12); //true dan false
    cout << "hasil: " << hasil << endl;
    hasil = (a == 13) && (b == 13); //false dan true
    cout << "hasil: " << hasil << endl;
    hasil = (a == 13) && (b == 14); //true dan true
    cout << "hasil: " << hasil << endl;

    return 0;
}
