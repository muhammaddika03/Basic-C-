#include <iostream>
#include <fstream> //mengirim data program ke file eksternal (save data). ofstream, ifstream, dan ftstream (campuran keduanya)

using namespace std;

int main (){
    ofstream myFile;

    //jenis perintah
    // ios::out = default, operasi output;
	// ios::app = menuliskan pada akhir baris; app artinya append yaitu menambahkan
	// ios::trunc = default, membuat file jika tidak ada, dan kalau ada akan dihapus;

    myFile.open("file1.txt",ios::out);
    myFile << "Aku seorang guru" << endl; //jika dalam inputan program atau dalam code edit dirubah maka pada file eksternal akan dirubah juga
    myFile.close();
    //cara inputkan text dll dalam file eksternal namafile << isi sama dengan cout << isi

    myFile.open("file2.txt",ios::trunc);
    myFile << "Aku seorang pemerhati lingkungan" << endl;//file akan terus dioverwrite atau ditempa
    myFile.close();
    
    myFile.open("file3.txt",ios::app);
    myFile << "Aku seorang pemerhati lingkungan" << endl;
    myFile.close();
    return 0;
}
