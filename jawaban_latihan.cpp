#include <iostream>
using namespace std;

class PersegiPanjang; // Deklarasi awal class PersegiPanjang

class BangunDatar
{
public:
    int hitungLuas ( int panjang, int lebar);
    int hitungKeliling ( int panjang, int lebar);
};

class PersegiPanjang //Constructor
{
    public:
    int panjang, lebar;

    friend int BangunDatar::hitungLuas(int panjang, int lebar);
    friend int BangunDatar::hitungKeliling(int panjang, int lebar);
};

//Friend Fucntion
int BangunDatar::hitungLuas(int p, int l)
{
    return p * l;
}

int BangunDatar::hitungKeliling(int p, int l)
{
    return 2 * (p + l);
}

int main()
{
    BangunDatar bD;
    PersegiPanjang pP;
    PersegiPanjang &refpP = pP;
    refpP.panjang = 10;
    refpP.lebar = 100;
    cout << bD.hitungLuas(refpP.panjang, refpP.lebar);
}