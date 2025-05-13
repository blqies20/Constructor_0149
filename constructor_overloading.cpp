#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
private:
    int nim;
    string nama;
public:                                 //Banyak constructor yang berbeda-beda
    Mahasiswa();
    Mahasiswa(int);
    Mahasiswa(string);
    Mahasiswa(int iNim, string iNama);

    void cetak();
};

Mahasiswa::Mahasiswa(){}                        //Banyak parameter yang berbeda menyesuaikan constructor

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
    Mahasiswa mhs1(1234567890);             //hanya nim
    Mahasiswa mhs2("Rani");                 //hanya nama
    Mahasiswa mhs3(1234567890, "Rani");     //nim & nama

    cout << "Mahasiswa 1 : "; mhs1.cetak();
    cout << "Mahasiswa 2 : "; mhs2.cetak();
    cout << "Mahasiswa 3 : "; mhs3.cetak();

    return 0;
}