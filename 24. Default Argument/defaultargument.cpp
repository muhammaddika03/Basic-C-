#include <iostream>

using namespace std;

//int t = 5 merupakan nilai bawaan atau default jika tidak memberikan inputan nilai
//jika memberikan argumen atau inputan nilai terhadap int t maka nilai t akan mengikuti sesuai nilai yang diinputkan
int luastrapesium(int a, int b, int t = 5){
    int luas;
    luas = 0.5 * (a + b) * t;
    return luas;
}

int main()
{
    int luas;
    luas = luastrapesium (7, 5, 10);//nilai int t menjadi t = 10 bukan t = 5

    cout << "luas: " << luas << endl;

    return 0;
}
