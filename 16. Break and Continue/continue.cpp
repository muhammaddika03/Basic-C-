#include <iostream>

using namespace std;

int main()
{
    //fungsi continue
    for (int i = 0; i < 14; i++)
    {
        if (i == 6) continue;
        cout << i << endl;
    }
    return 0;
}