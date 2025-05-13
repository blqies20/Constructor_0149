#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
public:
    Mahasiswa(int nim, string nama);
};

Mahasiswa::Mahasiswa(int nim, string nama)
{
    cout << "Constructor dengan Parameter Terpanggil" << endl;
    cout << "NIM : " << nim << endl;
    cout <<  "Nama : " << nama << endl;
}

int main()
{
    Mahasiswa mhs(123, "Rani");
    return 0;
}
