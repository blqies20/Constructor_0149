#include <iostream>
using namespace std;

class Mahasiswa
{
public:
    Mahasiswa(); //Constructor
};

Mahasiswa::Mahasiswa()
{
    cout << "Constructor Terpanggil" << endl; //Definisi Cosntructor
}

int main()
{
    Mahasiswa mhs; //Pembuatan Object
    return 0;
}
