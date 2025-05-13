#include <iostream>
using namespace std;

class Buku
{
    string judul;

    public:
    string setget(string judul)
    {
        this -> judul = judul;
        return this -> judul;
    }
};

int main()
{
    Buku bukunya;
    cout << bukunya.setget("Matematika");
    return 0;
}