#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    int nim;
    string gender;
    float nilai;
    Mahasiswa* prev;
    Mahasiswa* next;
};

class DoublyLinkedList {
private:
    Mahasiswa* head;
public:
    DoublyLinkedList() {
        head = nullptr;
    }

    void insertData(string nama, int nim, string gender, float nilai) {
        Mahasiswa* baru = new Mahasiswa{nama, nim, gender, nilai, nullptr, nullptr};
        if (!head) {
            head = baru;
            cout << "Data berhasil ditambahkan!" << endl;
            return;
        }

        Mahasiswa* current = head;
        Mahasiswa* prev = nullptr;
        while (current && current->nim < nim) {
            prev = current;
            current = current->next;
        }

        if (!prev) {
            baru->next = head;
            head->prev = baru;
            head = baru;
        } else {
            baru->next = current;
            baru->prev = prev;
            prev->next = baru;
            if (current) current->prev = baru;
        }
        cout << "Data berhasil disisipkan sesuai urutan NIM!" << endl;
    }

    void hapusData(int nim) {
        Mahasiswa* current = head;
        while (current) {
            if (current->nim == nim) {
                if (current->prev) current->prev->next = current->next;
                else head = current->next;
                if (current->next) current->next->prev = current->prev;
                delete current;
                cout << "Data dengan NIM " << nim << " berhasil dihapus." << endl;
                return;
            }
            current = current->next;
        }
        cout << "Data tidak ditemukan!" << endl;
    }

    void cetakData() {
        if (!head) {
            cout << "Data masih kosong!" << endl;
            return;
        }
        cout << "\n=== DAFTAR MAHASISWA ===" << endl;
        Mahasiswa* current = head;
        while (current) {
            cout << "NIM: " << current->nim
                 << " | Nama: " << current->nama
                 << " | Gender: " << current->gender
                 << " | Nilai: " << current->nilai << endl;
            current = current->next;
        }
        cout << "=========================" << endl;
    }
};

int main() {
    DoublyLinkedList dll;
    int pilihan;

    do {
        cout << "\nLIN. DOUBLY LINKED LIST" << endl;
        cout << "=========================" << endl;
        cout << "1. INSERT DATA" << endl;
        cout << "2. HAPUS DATA" << endl;
        cout << "3. CETAK DATA" << endl;
        cout << "4. EXIT" << endl;
        cout << "Pilih menu (1-4): ";
        cin >> pilihan;

        if (pilihan == 1) {
            string nama, gender;
            int nim;
            float nilai;
            cout << "Masukkan Nama: ";
            cin.ignore();
            getline(cin, nama);
            cout << "Masukkan NIM: ";
            cin >> nim;
            cout << "Masukkan Gender (L/P): ";
            cin >> gender;
            cout << "Masukkan Nilai: ";
            cin >> nilai;
            dll.insertData(nama, nim, gender, nilai);
        } else if (pilihan == 2) {
            int nim;
            cout << "Masukkan NIM yang akan dihapus: ";
            cin >> nim;
            dll.hapusData(nim);
        } else if (pilihan == 3) {
            dll.cetakData();
        } else if (pilihan == 4) {
            cout << "Program selesai." << endl;
        } else {
            cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilihan != 4);

    return 0;
}
