#include <iostream>
#include <string>
using namespace std;

struct Buku {
    int noAkses;
    string penulis;
    string judul;
    int jumlah;
    bool diterbitkan;
};

int main() {
    Buku perpustakaan[100];
    int jumlahBuku = 0;
    int pilihan;

    do {
        cout << "\n=== MENU PERPUSTAKAAN ===\n";
        cout << "1 - Menampilkan informasi buku\n";
        cout << "2 - Tambahkan buku baru\n";
        cout << "3 - Tampilkan semua buku dari penulis tertentu\n";
        cout << "4 - Tampilkan jumlah buku dengan judul tertentu\n";
        cout << "5 - Tampilkan jumlah total buku di perpustakaan\n";
        cout << "6 - Terbitkan buku\n";
        cout << "0 - Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1:
                for (int i = 0; i < jumlahBuku; i++) {
                    cout << "\nNo Akses   : " << perpustakaan[i].noAkses;
                    cout << "\nPenulis    : " << perpustakaan[i].penulis;
                    cout << "\nJudul      : " << perpustakaan[i].judul;
                    cout << "\nJumlah     : " << perpustakaan[i].jumlah;
                    cout << "\nDiterbitkan: " << (perpustakaan[i].diterbitkan ? "Ya" : "Tidak") << endl;
                }
                break;

            case 2:
                cout << "\nMasukkan Nomor Akses Buku : ";
                cin >> perpustakaan[jumlahBuku].noAkses;
                cin.ignore();
                cout << "Nama Penulis : ";
                getline(cin, perpustakaan[jumlahBuku].penulis);
                cout << "Judul Buku   : ";
                getline(cin, perpustakaan[jumlahBuku].judul);
                cout << "Jumlah Buku  : ";
                cin >> perpustakaan[jumlahBuku].jumlah;
                perpustakaan[jumlahBuku].diterbitkan = false;
                jumlahBuku++;
                cout << "Buku berhasil ditambahkan!\n";
                break;

            case 3: {
                string namaPenulis;
                cout << "Masukkan nama penulis: ";
                getline(cin, namaPenulis);
                for (int i = 0; i < jumlahBuku; i++) {
                    if (perpustakaan[i].penulis == namaPenulis) {
                        cout << perpustakaan[i].judul << " (" << perpustakaan[i].jumlah << " buku)\n";
                    }
                }
                break;
            }

            case 4: {
                string judulCari;
                cout << "Masukkan judul buku: ";
                getline(cin, judulCari);
                int total = 0;
                for (int i = 0; i < jumlahBuku; i++) {
                    if (perpustakaan[i].judul == judulCari)
                        total += perpustakaan[i].jumlah;
                }
                cout << "Jumlah buku dengan judul \"" << judulCari << "\": " << total << endl;
                break;
            }

            case 5: {
                int totalSemua = 0;
                for (int i = 0; i < jumlahBuku; i++)
                    totalSemua += perpustakaan[i].jumlah;
                cout << "Total semua buku di perpustakaan: " << totalSemua << endl;
                break;
            }

            case 6: {
                int no;
                cout << "Masukkan nomor akses buku yang diterbitkan: ";
                cin >> no;
                for (int i = 0; i < jumlahBuku; i++) {
                    if (perpustakaan[i].noAkses == no && perpustakaan[i].jumlah > 0) {
                        perpustakaan[i].jumlah--;
                        perpustakaan[i].diterbitkan = true;
                        cout << "Buku berhasil diterbitkan! Sisa stok: " << perpustakaan[i].jumlah << endl;
                    }
                }
                break;
            }

            case 0:
                cout << "Keluar dari program...\n";
                break;

            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 0);

    return 0;
}

