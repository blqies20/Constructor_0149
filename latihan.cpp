#include <iostream>
using namespace std;

class PersegiPanjang; // Deklarasi awal class PersegiPanjang

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
    PersegiPanjang() : panjang(0), lebar(0) {} // Konstruktor default

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

    // Deklarasi friend function
    friend int hitungLuas(const PersegiPanjang* Pp);
    friend int hitungKeliling(const PersegiPanjang* Pp);
};

// Definisi friend function untuk menghitung luas
int hitungLuas(const PersegiPanjang* Pp)
{
    return Pp->luasPp(); // Mengakses method luasPp() menggunakan pointer
}

// Definisi friend function untuk menghitung keliling
int hitungKeliling(const PersegiPanjang* Pp)
{
    return Pp->kelilingPp(); // Mengakses method kelilingPp() menggunakan pointer
}

int main()
{
    PersegiPanjang objekPp;
    objekPp.input();
    cout << endl;

    // Menggunakan friend function untuk menghitung luas dan keliling
    cout << "Menggunakan Friend Function" << endl;
    cout << "Luas Persegi Panjang : " << hitungLuas(&objekPp) << endl;
    cout << "Keliling Persegi Panjang : " << hitungKeliling(&objekPp) << endl;

    cout << endl;

    // Tetap bisa menggunakan method langsung dari objek
    cout << "Menggunakan Objek" << endl;
    cout << "Luas Persegi Panjang : " << objekPp.luasPp() << endl;
    cout << "Keliling Persegi Panjang : " << objekPp.kelilingPp() << endl;

    return 0;
}