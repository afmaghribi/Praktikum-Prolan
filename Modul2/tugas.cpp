#include <iostream>
using namespace std;

char *nama_hari(int d);
int main(){
    int day;
    cout << "Hari (1-7) : "; cin >> day ;
    cout << "Hari ke-"<<day<<" adalah hari " << nama_hari(day) << endl;
    cout << "----------------------\nAHMAD FAUZZAN MAGHRIBI\n----------------------\n";
    return 0;
}

char *nama_hari(int d){
    static char *hari[]={"Kode hari Salah!!","Senin","Selasa","Rabu","Kamis","Jum'at","Sabtu","Minggu"};
    if (d>=1 && d<=7){
        return hari[d];
    }
    else{
        return hari[0];
    }
}
