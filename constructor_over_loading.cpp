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
