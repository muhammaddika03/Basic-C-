#include <iostream>

using namespace std;

int main()
{
    //bentuk for loop

    cout << "Loop 1" << endl;
    for (int i = 1; i <= 12; i++)
    {
        cout << "data " << i << endl;
    }

    cout << "Loop 2" << endl;
    for (int i = 0; i <= 12; i += 2)
    {
        cout << i << endl;
    }

    cout << "Loop 3" << endl;
    for (int i = 0; i >= -12; i--)
    {
        cout << i << endl;
    }

    cout << "Loop 4" << endl;
    int aritmatika = 2;
    for (int i = 1; i < 15; i += 3)
    {
        cout << aritmatika << endl;
        aritmatika += i;
    }
    return 0;
}
