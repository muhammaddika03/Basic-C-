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
    for (int u = 1; u < n; u++)
    {
        for (int q = 1; q <= u ; q++)
        {
           cout << " ";
        }
       for (int k = u; k < n; k++)
        {
           cout << "x";
        }
        for (int l = u; l < n-1; l++)
        {
           cout << "x";
        }
        cout << "\n";
    }
return 0;
}
