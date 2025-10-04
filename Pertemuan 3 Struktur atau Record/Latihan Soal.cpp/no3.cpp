#include <iostream>
using namespace std;

struct Mahasiswa {
    int noUrut;
    string nama;
    int umur;
    string alamat;
    float nilai;
};

int main() {
    Mahasiswa mhs[15];

    cout << "Masukkan Data 15 Mahasiswa:\n";
    for (int i = 0; i < 15; i++) {
        mhs[i].noUrut = i + 1;
        cout << "\nMahasiswa ke-" << mhs[i].noUrut << endl;
        cin.ignore();
        cout << "Nama    : ";
        getline(cin, mhs[i].nama);
        cout << "Umur    : ";
        cin >> mhs[i].umur;
        cin.ignore();
        cout << "Alamat  : ";
        getline(cin, mhs[i].alamat);
        cout << "Nilai   : ";
        cin >> mhs[i].nilai;
    }

    cout << "\n=== Data Seluruh Mahasiswa ===\n";
    for (int i = 0; i < 15; i++) {
        cout << "\nNo Urut : " << mhs[i].noUrut;
        cout << "\nNama    : " << mhs[i].nama;
        cout << "\nUmur    : " << mhs[i].umur;
        cout << "\nAlamat  : " << mhs[i].alamat;
        cout << "\nNilai   : " << mhs[i].nilai << endl;
    }

    return 0;
}

