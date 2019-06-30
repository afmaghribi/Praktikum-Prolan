#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file;
    char Teks[50];
    int i;
    cout << "----------------------\nAHMAD FAUZZAN MAGHRIBI\n----------------------\n\n";
    file.open("data.txt");


        file.getline (Teks,50,'\n');
        cout << Teks << endl;

    file.close();
    return 0;
}
