#include <iostream>
#include <array>

using namespace std;

int main (){
    array <int, 10> arraynilaisiswa = {1,2,3,4,5,6,7,8,9,10};
    for (int i=0; i < arraynilaisiswa.size(); i++) {
        cout << arraynilaisiswa[i] << endl;
    } 
    cout << endl << endl;
    for (int nilaisiswa : arraynilaisiswa) 
    {
        nilaisiswa += 12; 
        cout << "address nilaisiswa : " << &nilaisiswa  << " nilai : " << nilaisiswa << endl;
         
    }
    cout << endl << endl;
     for (int &nilaisiswa : arraynilaisiswa) 
    {
        nilaisiswa += 12; 
        cout << "address nilaisiswa : " << &nilaisiswa  << " nilai : "  << nilaisiswa << endl;
    }
    return 0;
}