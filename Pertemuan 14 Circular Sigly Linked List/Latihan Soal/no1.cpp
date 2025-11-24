#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    string gender;
    float nilai;
};

struct Node {
    Mahasiswa mhs;
    Node *next;
};

Node *lastNode = NULL;

// ===============================
// INSERT TERURUT BERDASARKAN NIM
// ===============================
void insertData() {
    Node *baru = new Node;

    cout << "Masukkan Nama   : ";
    cin >> baru->mhs.nama;
    cout << "Masukkan NIM    : ";
    cin >> baru->mhs.nim;
    cout << "Masukkan Gender : ";
    cin >> baru->mhs.gender;
    cout << "Masukkan Nilai  : ";
    cin >> baru->mhs.nilai;

    if (lastNode == NULL) {
        lastNode = baru;
        baru->next = baru; // circular
        return;
    }

    Node *awal = lastNode->next;

    // Jika data baru lebih kecil, jadi head baru
    if (baru->mhs.nim < awal->mhs.nim) {
        baru->next = awal;
        lastNode->next = baru;
        return;
    }

    // Menyisipkan di tengah atau akhir
    Node *curr = awal;
    while (curr->next != awal && curr->next->mhs.nim < baru->mhs.nim) {
        curr = curr->next;
    }

    baru->next = curr->next;
    curr->next = baru;

    // Jika di akhir, update lastNode
    if (curr == lastNode)
        lastNode = baru;
}

// ===============================
// HAPUS DATA BERDASARKAN NIM
// ===============================
void hapusData() {
    if (lastNode == NULL) {
        cout << "List masih kosong!\n";
        return;
    }

    string target;
    cout << "Masukkan NIM yang ingin dihapus: ";
    cin >> target;

    Node *awal = lastNode->next;
    Node *curr = awal;
    Node *prev = lastNode;

    // mencari node
    do {
        if (curr->mhs.nim == target)
            break;
        prev = curr;
        curr = curr->next;
    } while (curr != awal);

    if (curr->mhs.nim != target) {
        cout << "Data dengan NIM tersebut tidak ditemukan!\n";
        return;
    }

    // Jika hanya satu node
    if (curr == lastNode && curr->next == lastNode) {
        lastNode = NULL;
    }
    else {
        prev->next = curr->next;
        if (curr == lastNode)
            lastNode = prev;
    }

    delete curr;
    cout << "Data berhasil dihapus!\n";
}

// ===============================
// CETAK SEMUA DATA
// ===============================
void cetakData() {
    if (lastNode == NULL) {
        cout << "List kosong!\n";
        return;
    }

    Node *awal = lastNode->next;
    Node *curr = awal;

    cout << "\n===== DATA MAHASISWA =====\n";
    do {
        cout << "Nama   : " << curr->mhs.nama << endl;
        cout << "NIM    : " << curr->mhs.nim << endl;
        cout << "Gender : " << curr->mhs.gender << endl;
        cout << "Nilai  : " << curr->mhs.nilai << endl;
        cout << "--------------------------\n";
        curr = curr->next;
    } while (curr != awal);
}

// ===============================
// MAIN PROGRAM (MENU)
// ===============================
int main() {
    int pilihan;

    do {
        cout << "\n=== CIRCULAR LINKED LIST ===\n";
        cout << "1. INSERT DATA\n";
        cout << "2. HAPUS DATA\n";
        cout << "3. CETAK DATA\n";
        cout << "4. EXIT\n";
        cout << "Pilihan (1 - 4): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: insertData(); break;
            case 2: hapusData(); break;
            case 3: cetakData(); break;
            case 4: cout << "Keluar...\n"; break;
            default: cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 4);

    return 0;
}
