#include <iostream>
using namespace std;

struct Buku {
    int nomorAkses;
    string penulis;
    string judul;
    bool diterbitkan;
};

int main() {
    Buku buku1 = {1, "TereLiye", "Pulang", true};

    cout << "Nomor Akses: " << buku1.nomorAkses << endl;
    cout << "Penulis: " << buku1.penulis << endl;
    cout << "Judul: " << buku1.judul << endl;
    cout << "Status: " << (buku1.diterbitkan ? "Diterbitkan" : "Belum Diterbitkan") << endl;

    return 0;
}


