#include <iostream>
#include <math.h>
using namespace std;

int main(){
    //1. Menampilkan Welcome to C++

    //cout << "Welcome to C++!";

    // 2. Operasi Aritmatika
    /*int m, n;
    m = 27;
    n = 5;
    cout << "m + n = " << m + n << endl;
    cout << "m - n = " << m - n << endl;
    cout << "m * n = " << m * n << endl;
    cout << "m / n = " << m / n << endl;
    cout << "m % n = " << m % n << endl;\
    cout << "~m = " << ~m << endl;*/

    // 3. Operator Bitwise
    /*int m,n;
    m=12;
    n=2;
    cout << "m >> n = " << (m>>n) << endl;
    cout << "m << n = " << (m<<n) << endl;
    cout << "m & n = " << (m&n) << endl;
    cout << "m | n = " << (m|n) << endl;
    cout << "m ^ n = " << (m^n) << endl;
    cout << "~m = " << (~m) << endl;*/

    //4. Operasi Logika
    /*int m, n;
    cout << "Masukkan nilai m = ";
    cin >> m;
    cout << "Masukkan nilai n = ";
    cin >> n;
    cout << "m = n --> " << (m==n) << endl;
    cout << "m != n --> " << (m!=n) << endl;
    cout << "m > n --> " << (m>n) << endl;
    cout << "m < n --> " << (m<n) << endl;
    cout << "m >= n --> " << (m>=n) << endl;
    cout << "m <= n --> " << (m<=n) << endl;*/

    // 5. Menampilkan perhitungan luas persegi panjang
    int luas, panjang, lebar;
    cout << "Masukkan panjang : ";
    cin >> panjang;
    cout << "Masukkan lebar : ";
    cin >> lebar;
    luas = panjang * lebar;
    cout << "Luas segi empat = "<<luas;

    return 0;
}
