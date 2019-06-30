#include <iostream>
using namespace std;

typedef struct{
    int NIM;
    char nama[20];
    int nilai[3];
} Mahasiswa;

int main(){
    Mahasiswa Mhs[2];
    int j,i;
    cout << "----------------------\nAHMAD FAUZZAN MAGHRIBI\n----------------------\n\n";
    for (i=0;i<2;i++){
        cout << "Data ke-" << i+1 << ":" << endl;
        cout << "NIM: ";
        cin >> Mhs[i].NIM;
        cout << "Nama: ";
        cin >> Mhs[i].nama;
        for(j=0;j<3;j++){
            cout << "Nilai ke-"<< j+1<< ": ";
            cin >> Mhs[i].nilai[j];
        }
        cout << endl;
    }
    cout << "\nData Mahasiswa\n";
    for(i=0;i<2;i++){
        cout << i+1 << "\t" << Mhs[i].nama << "\t\t";
        for(j=0;j<3;j++){
            cout << Mhs[i].nilai[j] << "\t";
        }
    cout << endl;
    }
}
