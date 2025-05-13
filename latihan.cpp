#include <iostream>
using namespace std;

class PersegiPanjang; 

class BangunDatar
{
public:
    int panjang, lebar;

public:
    void input()
    {
        cout << "Masukkan Panjang : ";
        cin >> panjang;
        cout << "Masukkan Lebar : ";
        cin >> lebar;
    }
};

class PersegiPanjang
{
private:
    int panjang;
    int lebar;

public:
    PersegiPanjang() : panjang(0), lebar(0) {} 

    void input()
    {
        cout << "Masukkan Panjang : ";
        cin >> panjang;
        cout << "Masukkan Lebar : ";
        cin >> lebar;
    }

    int luasPp() const
    {
        return panjang * lebar;
    }

    int kelilingPp() const
    {
        return 2 * (panjang + lebar);
    }

    friend int hitungLuas(const PersegiPanjang* Pp);
    friend int hitungKeliling(const PersegiPanjang* Pp);
};

int hitungLuas(const PersegiPanjang* Pp)
{
    return Pp->luasPp();
}

int hitungKeliling(const PersegiPanjang* Pp)
{
    return Pp->kelilingPp();
}

int main()
{
    PersegiPanjang objekPp;
    objekPp.input();
    cout << endl;

    cout << "Menggunakan Friend Function" << endl;
    cout << "Luas Persegi Panjang : " << hitungLuas(&objekPp) << endl;
    cout << "Keliling Persegi Panjang : " << hitungKeliling(&objekPp) << endl;

    cout << endl;

    cout << "Menggunakan Objek" << endl;
    cout << "Luas Persegi Panjang : " << objekPp.luasPp() << endl;
    cout << "Keliling Persegi Panjang : " << objekPp.kelilingPp() << endl;

    return 0;
}