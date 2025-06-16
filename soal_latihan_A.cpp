#include <iostream>
#include <string>
#include <iomanip>
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
};

class Staff {
    private:
        double gaji;

    public:
    string nama;
    string id;

    Staff(string iNama, string iId, double iGaji) {
        nama = iNama;
        id = iId;
        gaji = iGaji;
    }

    void ubahPangkat(Dosen* d, string pangkatBaru) {
        d->pangkat = pangkatBaru;
    }

    friend class Universitas;
};

class Universitas {
public:
    static double lihatGajiDosen(Dosen* d) {
        return d->gaji;
    }

    static double lihatGajiStaff(Staff* s) {
        return s->gaji;
    }
};

int main() {
    Mahasiswa mhs("Rani", "123456");
    Dosen dsn("Dr. Budi", "D001", "Lektor", 9500000);
    Staff stf("Pak Arif", "STF01", 5500000);

    dsn.beriNilai(&mhs, 87.6);
    mhs.tampil();

    dsn.tampil();
    stf.ubahPangkat(&dsn, "Guru Besar");
    dsn.tampil();

    cout << fixed << setprecision(0);
    cout << "Gaji Dosen (akses Universitas): " << Universitas::lihatGajiDosen(&dsn) << endl;
    cout << "Gaji Staff (akses Universitas): " << Universitas::lihatGajiStaff(&stf) << endl;

    return 0;
}