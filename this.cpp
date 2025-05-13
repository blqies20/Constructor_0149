#include <iostream>
using namespace std;

class Buku
{
    string judul;

    public:
    string setget(string judul)
    {
        this -> judul = judul;      //nilai parameter 'judul' untuk member variabel 'judul'
        return this -> judul;       //return variabel judul
    }
};

int main()
{
    Buku bukunya;
    cout << bukunya.setget("Matematika");
    return 0;
}