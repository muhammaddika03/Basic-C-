#include <iostream>

using namespace std;

void loopingarray (int *arraycontoh, int baris, int kolom){
    int index = 0;
    for (int i = 0; i < baris;i++) {
        cout << "[ ";
        for (int j = 0; j < kolom; j++) {
            cout << *(arraycontoh + index) <<" "; //index akan bertambah urut yang mulai dari 00 itu index = 0 sampai 3 4 index = 12
            index++;
        }
        cout << "]" << endl;
    }
}

int main (){
    const int baris = 3, kolom = 4;
    //array multidimensi = array di dalam array atau array yang memiliki banyak dimensi
    int array2dimensi [baris] [kolom]= {
        {1,2,3,4},//baris 1 dimulai baris 0 kolom 0 sampai baris baris 0 kolom 3 
        {5,6,7,8},//baris 1 dimulai baris 1 kolom 0 sampai baris baris 1 kolom 3 
        {9,10,11,12}//baris 1 dimulai baris 1 kolom 0 sampai baris baris 2 kolom 3 
    };
    loopingarray (*array2dimensi, baris, kolom);
  return 0;
}
