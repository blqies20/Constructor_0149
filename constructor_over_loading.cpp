#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
private:
    int nim;
    string nama;
public:
    Mahasiswa();
    Mahasiswa(int);
    Mahasiswa(string);
    Mahasiswa(int iNim, string iNama);

    void cetak();
};

Mahasiswa::Mahasiswa(){}

Mahasiswa::Mahasiswa(int iNim)
{
    nim = iNim;
}

Mahasiswa::Mahasiswa(string iNama)
{
    nama = iNama;
}

Mahasiswa::Mahasiswa( int iNim, string iNama)
{
    nim = iNim;
    nama = iNama;
}

void Mahasiswa::cetak()
{
    cout << endl << "NIM : " << nim << endl;
    cout << endl << "Nama : " << nama << endl;
}

int main()
{
    Mahasiswa mhs1(1234567890);
    Mahasiswa mhs2("Rani");
    Mahasiswa mhs3(1234567890, "Rani");

    return 0;
}