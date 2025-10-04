#include <iostream>
using namespace std;

struct Buku {
    int noAkses;
    string penulis;
    string judul;
    bool diterbitkan; // true = diterbitkan, false = belum
};

int main() {
    Buku buku1;

    cout << "Masukkan Nomor Akses Buku : ";
    cin >> buku1.noAkses;
    cin.ignore();
    cout << "Masukkan Nama Penulis     : ";
    getline(cin, buku1.penulis);
    cout << "Masukkan Judul Buku       : ";
    getline(cin, buku1.judul);

    char status;
    cout << "Apakah buku diterbitkan? (y/n): ";
    cin >> status;
    buku1.diterbitkan = (status == 'y' || status == 'Y');

    cout << "\n=== Informasi Buku ===\n";
    cout << "Nomor Akses : " << buku1.noAkses << endl;
    cout << "Penulis     : " << buku1.penulis << endl;
    cout << "Judul       : " << buku1.judul << endl;
    cout << "Diterbitkan : " << (buku1.diterbitkan ? "Ya" : "Tidak") << endl;

    return 0;
}

