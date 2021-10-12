#include <iostream>

using namespace std;

int main()
{
    int i, fn, fn1, fn2; //fn1 dan fn2 berarti suku n-1 dan n-2
    fn1 = 1, fn2 = 0;
    for (i = 1; i <= 6; i++)
    {
        fn = fn1 + fn2;
        fn2 = fn1; 
        fn1 = fn;
        cout << fn << endl;
    }
return 0;
}