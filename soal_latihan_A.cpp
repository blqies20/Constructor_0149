#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
    private:
        float nilai;
    public:
        string nama;
        string nim;

        Mahasiswa(string iNama, string iNim) {
            nama = iNama;
            nim = iNim;
            nilai = 0.0;
        }
};