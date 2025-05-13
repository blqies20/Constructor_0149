#include <iostream>
using namespace std;

class Buku
{
    string judul;

    public:
    Buku setJudul(string judul)
    {
        this -> judul = judul;
        return *this;
    }
    string getJudul()
    {
        return this -> judul;
    }
};

int main()
{
    Buku bukunya;
    cout << bukunya.setJudul("Matematika").getJudul();
    cout << bukunya.setJudul("Sains").getJudul();
    cout << bukunya.setJudul("English").getJudul();
}