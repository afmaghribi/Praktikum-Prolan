#include <iostream>
using namespace std;
typedef struct{
    int NIM;
    string nama;
    int umur;
} Mahasiswa;

int main(){
    Mahasiswa Mhs[10];
    int i;
    for (i=0;i<10;i++){
        cout << "Data ke-" << i+1 << ":" << endl;
        cout << "NIM: ";
        cin >> Mhs[i].NIM;
        cout << "Nama: ";
        cin >> Mhs[i].nama;
        cout << "Umur: ";
        cin >> Mhs[i].umur;
    }
    cout << "|\tNIM \t\t|\tNama \t\t|\tUMUR \t|\n";
    for (i=0;i<10;i++){
        cout << "|\t" << Mhs[i].NIM << "\t|\t" <<
        Mhs[i].nama << "\t\t|\t" << Mhs[i].umur << "\t|\n";
    }
    cout << "----------------------\nAHMAD FAUZZAN MAGHRIBI\n----------------------\n\n";
    return 0;
}
