#include <iostream>

using namespace std;

int main()
{
    string username, password;
    cout << "Selamat datang di aplikasi social media kang kampret" << endl;
    do
    {
    cout << "Username : ";
    cin >> username;
    cout << "Password : ";
    cin >> password;
    if (username != "Dika", password != "dikaganteng")
        {
            cout << "Maaf pass anda salah dan coba lagi" << endl;
        }
    }while (username != "Dika", password != "dikaganteng");
    cout << "Selamat bergabung di grup social media terbaik sepanjang masa" << endl;
    return 0;
}
