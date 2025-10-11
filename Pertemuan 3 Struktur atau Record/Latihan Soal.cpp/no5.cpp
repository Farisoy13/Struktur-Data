#include <iostream>
#include <vector>
using namespace std;

struct Buku {
    int nomorAkses;
    string penulis;
    string judul;
    int jumlah;
};

int main() {
    vector<Buku> perpustakaan;
    int pilih;

    do {
        cout << "\n=== MENU PERPUSTAKAAN ===\n";
        cout << "1. Tampilkan informasi buku\n";
        cout << "2. Tambah buku baru\n";
        cout << "3. Tampilkan semua buku oleh penulis tertentu\n";
        cout << "4. Tampilkan jumlah buku dengan judul tertentu\n";
        cout << "5. Tampilkan jumlah total buku\n";
        cout << "6. Terbitkan buku\n";
        cout << "0. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilih;

        if (pilih == 1) {
            for (auto &b : perpustakaan)
                cout << b.nomorAkses << " | " << b.penulis << " | "
                     << b.judul << " | Jumlah: " << b.jumlah << endl;

        } else if (pilih == 2) {
            Buku b;
            cout << "Nomor Akses: "; cin >> b.nomorAkses;
            cout << "Penulis: "; cin >> b.penulis;
            cout << "Judul: "; cin >> b.judul;
            cout << "Jumlah: "; cin >> b.jumlah;
            perpustakaan.push_back(b);

        } else if (pilih == 3) {
            string cari;
            cout << "Masukkan nama penulis: "; cin >> cari;
            for (auto &b : perpustakaan)
                if (b.penulis == cari)
                    cout << b.nomorAkses << " | " << b.judul
                         << " | Jumlah: " << b.jumlah << endl;

        } else if (pilih == 4) {
            string cari;
            int hitung = 0;
            cout << "Masukkan judul: "; cin >> cari;
            for (auto &b : perpustakaan)
                if (b.judul == cari) hitung += b.jumlah;
            cout << "Jumlah buku berjudul '" << cari << "': " << hitung << endl;

        } else if (pilih == 5) {
            int total = 0;
            for (auto &b : perpustakaan)
                total += b.jumlah;
            cout << "Total semua buku: " << total << endl;

        } else if (pilih == 6) {
            int kode;
            cout << "Masukkan nomor akses buku yang diterbitkan: ";
            cin >> kode;
            for (auto &b : perpustakaan)
                if (b.nomorAkses == kode && b.jumlah > 0)
                    b.jumlah--;
        }

    } while (pilih != 0);

    return 0;
}

