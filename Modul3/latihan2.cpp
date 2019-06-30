#include <iostream>

using namespace std;

typedef struct{
    int x;
    int y;
} Titik;

int main(){
    Titik P;
    cout << "----------------------\nAHMAD FAUZZAN MAGHRIBI\n----------------------\n\n";
    cout << "Masukkan satu koordinat:" << endl << "x1: ";
    cin >> P.x;
    cout << "y1: ";
    cin >> P.y;
    cout << endl << "Koordinat yang anda masukkan:(" << P.x << "," << P.y << ")" << endl;
    return 0;
}
