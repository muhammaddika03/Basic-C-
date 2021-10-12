#include <iostream>

using namespace std;

int main()
{
    //fungsi break
    for (int i = 0; i < 14; i++)
    {
        if (i == 6) break;
        cout << i << endl;
    }
    return 0;
}
