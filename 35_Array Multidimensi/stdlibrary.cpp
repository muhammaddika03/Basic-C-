#include <iostream>
#include <array>

using namespace std;
const int baris = 3, kolom = 4;
void loopingarray (array < array <int,kolom> , baris>&nilai2){
    for (array <int,kolom> vektorbaris : nilai2){
        cout << "[ ";
        for (int vektorkolom : vektorbaris){
            cout << vektorkolom << " ";
        }
        cout << "]" << endl;
    }
}
int main (){

    //array multidimensi = array di dalam array atau array yang memiliki banyak dimensi
    array < array <int,kolom> , baris> nilai2 = {1,2,3,4,5,6,7,8,9,10,11,12};//baris 1 dimulai baris 1 kolom 0 sampai baris baris 2 kolom 3 
    //artinya sama dengan int array2dimensi [baris][kolom] yang berarti array di dalam array
    loopingarray (nilai2);
    return 0;
}