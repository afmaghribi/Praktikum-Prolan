#include <iostream>
using namespace std;
#define MAX 5

int main()
{
    //Latihan 5
    int a[MAX];
    int *pa; pa = a; // atau pa = &a[0]
    cout << "----------------------\nAHMAD FAUZZAN MAGHRIBI\n----------------------\n\n";
    for (int i = 0; i<MAX; i++)
    {
    cout << "Masukkan Nilai " << i+1 << " : ";
    cin >> a[i];
    }
    cout << endl;
    for (int i = 0; i<MAX; i++)
    {
    cout << "Nilai a[" << i << "] = "<< *pa << endl;
    pa++;
    }
    return 0;
}
    //Latihan 1
    /*int *pBil;
    int bilX=17;
    pBil = &bilX;
    cout << "----------------------\nAHMAD FAUZZAN MAGHRIBI\n----------------------\n\n";
    cout << "isi bilX = " << bilX << endl;
    cout << "Nilai yang ditunjuk pBil = " << *pBil << endl;
    *pBil = *pBil + 3;
    cout << "isi bil X sekarang = " << bilX << endl;
    cout << "Nilai yang ditunjuk pBil = " << *pBil << endl;*/

    //Latihan 2
    /*int x, y;
    int *px;
    x = 17;
    y=x;
    px = &x;
    cout << "----------------------\nAHMAD FAUZZAN MAGHRIBI\n----------------------\n\n";
    cout << "Nilai x = " << x << endl;
    cout << "Nilai y = " << y << endl;
    cout << "Alamat px = " << px << endl;
    cout << "Nilai px = " << *px << endl;*/

        //Latihan 3
    /*int x;
    int *px; // pointer ke variabel
    int **ppx; // pointer ke pointer
    x = 1717;
    px = &x;
    ppx = &px;
    cout << "----------------------\nAHMAD FAUZZAN MAGHRIBI\n----------------------\n\n";
    cout << "Nilai x = " << x << endl;
    cout << "Nilai px = " << *px << endl;
    cout << "Nilai ppx = " << **ppx << endl;*/

    //Latihan 4
    /*long *p, x;
    p = &x;
    x = 17;
    cout << "----------------------\nAHMAD FAUZZAN MAGHRIBI\n----------------------\n\n";
    cout << "Nilai X = " << x << endl;
    cout << "Nilai *p = " << *p << endl;
    cout << "Nilai p = " << p << endl;
    cout << "Nilai &x = " << &x << endl << endl;
    *p = 20;
    cout << "Nilai X = " << x << endl;
    cout << "Nilai *p = " << *p << endl;
    cout << "Nilai p = " << p << endl;
    cout << "Nilai &x = " << &x << endl << endl;*/

