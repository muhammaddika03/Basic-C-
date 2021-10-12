#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
       for (int b = i; b < n; b++)
       {
           cout << " ";
       }
       for (int a = 1; a <= i; a++)
       {
           cout << "x";
       }
       for (int c = 1; c < i; c++)
       {
           cout << "x";
       }
       cout << "\n";
    }
return 0;
}