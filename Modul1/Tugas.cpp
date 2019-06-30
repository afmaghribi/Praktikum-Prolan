#include <iostream>
#include <math.h>
using namespace std;

int main(){
     //Tugas 1
    /*char namakamu[30];
    int nimkamu;
    cout << "Masukkan Nama kamu : ";
    cin.getline(namakamu,30);
    cout << "Masukkan NIM kamu : ";
    cin >> nimkamu;
    cout << "Nama yang kamu masukkan " << namakamu << endl;
    cout << "NIM yang kamu masukkan " << nimkamu << endl;*/

    //Tugas 2
    /*float Fahren,Celci,Ream,Kelv;
    cout << "\t\tProgram Konversi Suhu\n";
    cout << "Masukkan suhu dalam Fahrenheit : "; cin >> Fahren;
    Celci = (Fahren-32)*5/9;
    Ream = (Fahren-32)*4/9;
    Kelv = (Fahren-32)*5/9 + 273.15;
    cout << "\nHasil konversi suhu ke Celcius : " << Celci;
    cout << "\nHasil konversi suhu ke Reamur : " << Ream;
    cout << "\nHasil konversi suhu ke Kelvin : " << Kelv;*/

    //Tugas 3
    /*float v,r,t,pi = 3.14;

    cout << "\t\tProgram Menghitung Volume Tabung\n";
    cout << "Masukkan jari-jari tabung : "; cin >> r;
    cout << "Masukkan tinggi tabung : "; cin >> t;
    v = pi*pow(r,2)*t;
    cout << "Volume dari tabung adalah " << v;*/

    //Tugas 4
    float a,b,c;
    cout << "\t\tProgram Menghitung phitagoras a,b, dan c\n";
    cout << "Masukkan nilai a : ";cin >> a;
    cout << "Masukkan nilai b : ";cin >> b;
    c = sqrt(pow(a,2)+pow(b,2));
    cout << "Maka nilai dari c adalah " << c;
    return 0;
}
