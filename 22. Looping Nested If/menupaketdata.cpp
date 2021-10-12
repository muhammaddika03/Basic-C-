#include <iostream>

using namespace std;

int main ()
{
    bool paketdata = 1;
    while (paketdata == 1) 
    {
        int nomorpilih;

        cout << "COMBO SAKTI 25GB FULL YOUTUBE/ Rp 100RB / 30hr \n";
        cout << "1. Beli \n";
        cout << "2. 17GB Combo UL/ Rp. 75rb \n";
        cout << "3. 13GB Combo UL/ Rp. 58rb \n";
        cout << "4. 11GB Combo UL/ Rp. 50rb \n";
        cout << "5. OMG! Nonton 20GB \n";
        cout << "6. Keluar \n";
        cout << "Pilih nomor pilihan anda : ";
        cin >> nomorpilih;
        
        if (nomorpilih == 1) {
            int paket1;
            cout << "Anda akan membeli Combo Sakti Unlimited 25GB, 150Mnt Tsel, 400SMS Tsel,\n";
            cout << "Bebas chat, Sosmed, Games, Youtube, Tiktok dengan FUP 20GB & Disney/ 30hr / Rp 102000? \n";
            cout << "1. Beli \n";
            cout << "2. Keluar \n";
            cout << "Pilih nomor pilihan anda : ";
            cin >> paket1;
            if (paket1 == 1) {
                cout << "Paket anda akan diproses dan akan mendapatkan SMS ketika paket anda aktif\n";
                break;
            } else if (paket1 == 2) {
                break;
            }
        }
        if (nomorpilih == 2) {
            int paket2;
            cout << "Anda akan membeli Combo Sakti Unlimited 17GB, 150Mnt Tsel, 400SMS Tsel,\n";
            cout << "Bebas chat, Sosmed, Games, Youtube, Tiktok dengan FUP 15GB & Disney/ 30hr / Rp 76000? \n";
            cout << "1. Beli \n";
            cout << "2. Kembali \n";
            cout << "3. Keluar \n";
            cout << "Pilih nomor pilihan anda : ";
            cin >> paket2;
             if (paket2 == 1) {
                cout << "Paket anda akan diproses dan akan mendapatkan SMS ketika paket anda aktif\n";
                break;
            } else if (paket2 == 2) {
                paketdata = 1;
            } else if (paket2 == 3) {
                break;
            }
        }
        if (nomorpilih == 3) {
            int paket3;
            cout << "Anda akan membeli Combo Sakti Unlimited 13GB, 75Mnt Tsel, 400SMS Tsel,\n";
            cout << "Bebas chat, Sosmed, Games, Tiktok dengan FUP 10GB & Disney/ 30hr / Rp 59000? \n";
            cout << "1. Beli \n";
            cout << "2. Kembali \n";
            cout << "3. Keluar \n";
            cout << "Pilih nomor pilihan anda : ";
            cin >> paket3;
             if (paket3 == 1) {
                cout << "Paket anda akan diproses dan akan mendapatkan SMS ketika paket anda aktif\n";
                break;
            } else if (paket3 == 2) {
                paketdata = 1;
            } else if (paket3 == 3) {
                break;
            }
        }
        if (nomorpilih == 4) {
            int paket4;
            cout << "Anda akan membeli Combo Sakti 11GB, 75Mnt Tsel, 400SMS Tsel,& Langganan Disney/ 30hr / Rp 51000? \n";
            cout << "1. Beli \n";
            cout << "2. Kembali \n";
            cout << "3. Keluar \n";
            cout << "Pilih nomor pilihan anda : ";
            cin >> paket4;
             if (paket4 == 1) {
                cout << "Paket anda akan diproses dan akan mendapatkan SMS ketika paket anda aktif\n";
                break;
            } else if (paket4 == 2) {
                paketdata = 1;
            } else if (paket4 == 3) {
                break;
            }
        }
        if (nomorpilih == 5) {
            int paket5;
            cout << "Anda akan membeli Paket OMG! Nonton 20GB(8GB Nasional, 12GB Chat, \n";
            cout << "Sosmed, Youtube, Tiktok, VIU, Maxstream, dll) & Disney/ 30hr / Rp 110000\n";
            cout << "1. Beli \n";
            cout << "2. Kembali \n";
            cout << "3. Keluar \n";
            cout << "Pilih nomor pilihan anda : ";
            cin >> paket5;
             if (paket5 == 1) {
                cout << "Paket anda akan diproses dan akan mendapatkan SMS ketika paket anda aktif\n";
                break;
            } else if (paket5 == 2) {
                paketdata = 1;
            } else if (paket5 == 3) {
                break;
            }
        }
        if (nomorpilih == 6) {
            break;
        }
    }
        
    return 0;
}
