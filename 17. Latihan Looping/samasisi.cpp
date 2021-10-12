#include <iostream>

using namespace std;

int main ()
{
    int n;

    cout << "Masukkan nilai n atau suku ke n: ";
    cin >> n;

    for (int i = 1; i <= n; i++ )
    {
    for (int a = 1; a < i; a++ )
    {
        cout << " ";
    }
    for (int j = n; j >= i; j--)
    {
    cout << "x";
    }
    
    for (int q = n; q > i; q--)
    {
    cout << "x";
    }
    cout << endl;
    }
    return 0;
}