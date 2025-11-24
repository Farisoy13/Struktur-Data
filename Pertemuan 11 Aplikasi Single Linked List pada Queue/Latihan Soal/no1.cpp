#include <iostream>
#include <string>
#include <thread>
#include <chrono>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    string gender;
    float nilai;
    Mahasiswa* next;
};

Mahasiswa* head = NULL;

void animasi(const string& teks) {
    for (char c : teks) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(40));
    }
    cout << endl;
}

void insertData() {
    system("cls");
    Mahasiswa* baru = new Mahasiswa;
    cout << "Masukkan Nama: ";
    cin.ignore();
    getline(cin, baru->nama);
    cout << "Masukkan NIM: ";
    getline(cin, baru->nim);
    cout << "Masukkan Gender: ";
    getline(cin, baru->gender);
    cout << "Masukkan Nilai Struktur Data: ";
    cin >> baru->nilai;

    baru->next = head;
    head = baru;

    animasi("Data berhasil ditambahkan ke Stack...");
}

void hapusData() {
    system("cls");
    if (head == NULL) {
        animasi("Stack kosong! Tidak ada data untuk dihapus.");
        return;
    }
    Mahasiswa* hapus = head;
    head = head->next;

    animasi("Menghapus data teratas...");
    this_thread::sleep_for(chrono::milliseconds(500));
    cout << "Data " << hapus->nama << " telah dihapus.\n";
    delete hapus;
}

void cetakData() {
    system("cls");
    if (head == NULL) {
        animasi("Stack kosong. Tidak ada data untuk ditampilkan.");
        return;
    }
    animasi("Menampilkan isi Stack:\n");
    Mahasiswa* bantu = head;
    int i = 1;
    while (bantu != NULL) {
        cout << "Data ke-" << i++ << endl;
        cout << "Nama   : " << bantu->nama << endl;
        cout << "NIM    : " << bantu->nim << endl;
        cout << "Gender : " << bantu->gender << endl;
        cout << "Nilai  : " << bantu->nilai << endl;
        cout << "-------------------------" << endl;
        bantu = bantu->next;
    }
}

int main() {
    int pilihan;
    do {
        system("cls");
        cout << "===== PROGRAM STACK (Linked List dengan Head) =====\n";
        cout << "1. INSERT DATA\n";
        cout << "2. HAPUS DATA\n";
        cout << "3. CETAK DATA\n";
        cout << "4. EXIT\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: insertData(); break;
            case 2: hapusData(); break;
            case 3: cetakData(); break;
            case 4: animasi("Keluar dari program..."); break;
            default: cout << "Pilihan tidak valid!\n"; break;
        }
        system("pause");
    } while (pilihan != 4);
}
