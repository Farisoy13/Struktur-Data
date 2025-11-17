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
    Node *prev;
};

Node *head = NULL;

// ==========================================
// INSERT TERURUT MENAIK BERDASARKAN NIM
// ==========================================
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

    if (head == NULL) {
        head = baru;
        baru->next = baru;
        baru->prev = baru;
        return;
    }

    Node *curr = head;

    // Jika nim baru lebih kecil dari head → jadi head baru
    if (baru->mhs.nim < head->mhs.nim) {
        Node *tail = head->prev;

        baru->next = head;
        baru->prev = tail;
        head->prev = baru;
        tail->next = baru;
        head = baru;
        return;
    }

    // Sisip di tengah atau akhir
    while (curr->next != head && curr->next->mhs.nim < baru->mhs.nim) {
        curr = curr->next;
    }

    baru->next = curr->next;
    baru->prev = curr;
    curr->next->prev = baru;
    curr->next = baru;
}

// ==========================================
// HAPUS DATA BERDASARKAN NIM
// ==========================================
void hapusData() {
    if (head == NULL) {
        cout << "List masih kosong!\n";
        return;
    }

    string target;
    cout << "Masukkan NIM yang ingin dihapus: ";
    cin >> target;

    Node *curr = head;

    do {
        if (curr->mhs.nim == target)
            break;
        curr = curr->next;
    } while (curr != head);

    if (curr->mhs.nim != target) {
        cout << "Data tidak ditemukan!\n";
        return;
    }

    // Jika hanya satu node
    if (curr->next == curr && curr->prev == curr) {
        head = NULL;
        delete curr;
        cout << "Data berhasil dihapus!\n";
        return;
    }

    // Jika data yang dihapus adalah head
    if (curr == head) {
        Node *tail = head->prev;
        head = head->next;
        tail->next = head;
        head->prev = tail;
    } 
    else {
        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
    }

    delete curr;
    cout << "Data berhasil dihapus!\n";
}

// ==========================================
// CETAK SEMUA DATA
// ==========================================
void cetakData() {
    if (head == NULL) {
        cout << "List kosong!\n";
        return;
    }

    Node *curr = head;

    cout << "\n===== DATA MAHASISWA =====\n";
    do {
        cout << "Nama   : " << curr->mhs.nama << endl;
        cout << "NIM    : " << curr->mhs.nim << endl;
        cout << "Gender : " << curr->mhs.gender << endl;
        cout << "Nilai  : " << curr->mhs.nilai << endl;
        cout << "--------------------------\n";
        curr = curr->next;
    } while (curr != head);
}

// ==========================================
// MENU UTAMA
// ==========================================
int main() {
    int pilihan;

    do {
        cout << "\n=== CIRCULAR DOUBLY LINKED LIST ===\n";
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
