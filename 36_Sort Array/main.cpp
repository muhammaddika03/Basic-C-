#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void printarraynilaimahasiswa (array < int , 10> &nilaimahasiswa){
    cout << "Nilai mahasiswa : ";
    for (int wadahnilai : nilaimahasiswa){
        cout  << wadahnilai << " ";
    }
}
int main(){
    array < int , 10> nilaimahasiswa = {1,2,3,4,5,6,4,2,3,1};
    printarraynilaimahasiswa(nilaimahasiswa);
    
    cout << endl << endl;
    cout << "Nilai tersebut diurutkan" << endl << endl;
    sort (nilaimahasiswa.begin(),nilaimahasiswa.end());
    printarraynilaimahasiswa(nilaimahasiswa);
    return 0;
}
