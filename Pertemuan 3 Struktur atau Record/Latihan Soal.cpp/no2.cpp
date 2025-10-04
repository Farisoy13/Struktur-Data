#include <iostream>
using namespace std;

struct Mahasiswa {
    int noUrut;
    string nama;
    int umur;
};

int main() {
    Mahasiswa mhs[5];

    cout << "Masukkan Data 5 Mahasiswa:\n";
    for (int i = 0; i < 5; i++) {
        mhs[i].noUrut = i + 1;
        cout << "\nMahasiswa ke-" << mhs[i].noUrut << endl;
        cout << "Nama  : ";
        cin.ignore();
        getline(cin, mhs[i].nama);
        cout << "Umur  : ";
        cin >> mhs[i].umur;
    }

    cout << "\n=== Detail Mahasiswa dengan No Urut 2 ===\n";
    cout << "No Urut : " << mhs[1].noUrut << endl;
    cout << "Nama    : " << mhs[1].nama << endl;
    cout << "Umur    : " << mhs[1].umur << endl;

    return 0;
}

