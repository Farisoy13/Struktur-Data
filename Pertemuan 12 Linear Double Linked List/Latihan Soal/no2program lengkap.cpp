#include <iostream>
#include <string>
using namespace std;

// ===== Struktur Node =====
struct Node {
    string nim;
    string nama;
    int nilai;
    Node* next;
};

// ===== Struktur Linked List =====
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // (a) Tambah data baru (urut berdasarkan nilai)
    void tambahData(string nim, string nama, int nilai) {
        Node* baru = new Node;
        baru->nim = nim;
        baru->nama = nama;
        baru->nilai = nilai;
        baru->next = nullptr;

        if (head == nullptr || head->nilai > nilai) {
            baru->next = head;
            head = baru;
        } else {
            Node* bantu = head;
            while (bantu->next != nullptr && bantu->next->nilai < nilai) {
                bantu = bantu->next;
            }
            baru->next = bantu->next;
            bantu->next = baru;
        }
    }

    // (b) Tampilkan data dengan nilai = 90
    void tampilNilai90() {
        Node* bantu = head;
        bool ketemu = false;
        cout << "Data dengan nilai = 90:" << endl;
        while (bantu != nullptr) {
            if (bantu->nilai == 90) {
                cout << bantu->nim << " - " << bantu->nama << " - " << bantu->nilai << endl;
                ketemu = true;
            }
            bantu = bantu->next;
        }
        if (!ketemu)
            cout << "Tidak ada data dengan nilai 90." << endl;
    }

    // (c) Tampilkan seluruh data
    void tampilSemua() {
        Node* bantu = head;
        if (bantu == nullptr) {
            cout << "Data masih kosong." << endl;
            return;
        }
        cout << "Seluruh data mahasiswa:" << endl;
        while (bantu != nullptr) {
            cout << bantu->nim << " - " << bantu->nama << " - " << bantu->nilai << endl;
            bantu = bantu->next;
        }
    }

    // (d) Hapus data berdasarkan NIM
    void hapusData(string nim) {
        Node* bantu = head;
        Node* prev = nullptr;

        while (bantu != nullptr && bantu->nim != nim) {
            prev = bantu;
            bantu = bantu->next;
        }

        if (bantu == nullptr) {
            cout << "Data dengan NIM " << nim << " tidak ditemukan." << endl;
            return;
        }

        if (prev == nullptr)
            head = bantu->next;
        else
            prev->next = bantu->next;

        delete bantu;
        cout << "Data dengan NIM " << nim << " berhasil dihapus." << endl;
    }

    // (e) Hitung rata-rata nilai kelas
    void rataRata() {
        Node* bantu = head;
        int total = 0, jumlah = 0;
        while (bantu != nullptr) {
            total += bantu->nilai;
            jumlah++;
            bantu = bantu->next;
        }

        if (jumlah == 0)
            cout << "Tidak ada data untuk dihitung rata-rata." << endl;
        else
            cout << "Rata-rata nilai kelas = " << (float)total / jumlah << endl;
    }
};

// ===== Fungsi Utama =====
int main() {
    LinkedList data;

    // (a) Tambah data baru
    data.tambahData("2007140021", "Andi", 85);
    data.tambahData("2007140022", "Budi", 90);
    data.tambahData("2007140023", "Citra", 75);
    data.tambahData("2007140024", "Dewi", 95);

    cout << "=== (c) Menampilkan Seluruh Data (Urut Berdasarkan Nilai) ===" << endl;
    data.tampilSemua();

    cout << "\n=== (b) Menampilkan Data dengan Nilai = 90 ===" << endl;
    data.tampilNilai90();

    cout << "\n=== (d) Menghapus Data NIM 2007140022 ===" << endl;
    data.hapusData("2007140022");

    cout << "\n=== Setelah Dihapus ===" << endl;
    data.tampilSemua();

    cout << "\n=== (e) Menghitung Rata-rata Nilai Kelas ===" << endl;
    data.rataRata();

    return 0;
}
