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

    file.seekg(1,ios::beg);
    file.getline (Teks,50,'\n');
    cout << Teks << endl;

    file.seekg(6,ios::cur);
    file.getline (Teks,50,'\n');
    cout << Teks << endl;

    file.seekg(-4,ios::end);
    file.getline (Teks,50,'\n');
    cout << Teks << endl;

    file.close();
    return 0;
}
