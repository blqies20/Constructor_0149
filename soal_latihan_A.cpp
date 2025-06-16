#include <iostream>
#include <string>
using namespace std;

class Dosen;

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

        void tampil() {
            cout << "Mahasiswa: " << nama << "("<< nim <<"), Nilai: " << nilai << endl;
        }
        friend class Dosen;
};

class Dosen {
    private:
        string pangkat;
        double gaji;
    public:
        string nama;
        string nidn;

        Dosen(string iNama, string iNidn, string iPangkat, double iGaji) {
            nama = iNama;
            nidn = iNidn;
            pangkat = iPangkat;
            gaji = iGaji;
        }
};