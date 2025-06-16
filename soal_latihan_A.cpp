#include <iostream>
#include <string>
using namespace std;

class Dosen;
class Staff;

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

        void beriNilai(Mahasiswa* m, float nilai) {
            m->nilai = nilai;
        }

        void tampil() {
            cout << "Dosen: " << nama << "("<< nidn <<"), Pangkat: " << pangkat << endl;
        }

        friend class Staff;
        friend class Universitas;
        friend double lihatGajiDosen(Dosen* d);
};