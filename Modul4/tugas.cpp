#include <iostream>
#include <fstream>

using namespace std;

typedef struct{
    char nama[20];
    int nim;
    char kelas[20];
} Mahasiswa;

int main(){
    ofstream save;
    Mahasiswa mhs[2];
    int i;
    cout << "----------------------\nAHMAD FAUZZAN MAGHRIBI\n----------------------\n\n";
    for(i=0;i<2;i++){
        cout << "Data ke-" << i+1 << endl;
        cout << "Nama : "; cin >> mhs[i].nama;
        cout << "NIM : "; cin >> mhs[i].nim;
        cout << "Kelas : "; cin >> mhs[i].kelas;
    }
    cout << "Data Mahasiswa\n";
    cout << "|\tNama\t|\tNIM\t|\tKelas\t|\n";
    for(i=0;i<2;i++){
        cout << "|\t" << mhs[i].nama << "\t|\t" << mhs[i].nim << "\t|\t" << mhs[i].kelas << "\t|\n";
    }
    save.open("17101044.ahm");
    save << "Data Mahasiswa\n";
    save << "|\tNama\t|\tNIM\t|\tKelas\t|\n";
    for(i=0;i<2;i++){
        save << "|\t" << mhs[i].nama << "\t|\t" << mhs[i].nim << "\t|\t" << mhs[i].kelas << "\t|\n";
    }
    save.close();
    return 0;
}
