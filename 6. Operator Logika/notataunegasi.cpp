#include <iostream> 

using namespace std;

int main ()
{
    //negasi (not)
    int a= 12;
    int b= 13;
    bool hasil;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    hasil = !(a==b);
    cout << "hasil: " << hasil << endl;
    return 0;
}