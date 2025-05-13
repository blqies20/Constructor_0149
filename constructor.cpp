#include <iostream>
using namespace std;

class Mahasiswa
{
public:
    Mahasiswa();
};

Mahasiswa::Mahasiswa()
{
    cout << "Constructor Terpanggil" << endl;
}

int main()
{
    Mahasiswa mhs;
    return 0;
}
