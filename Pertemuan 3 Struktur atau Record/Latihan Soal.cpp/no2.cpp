#include <iostream>
using namespace std;

struct Mahasiswa {
    int no_urut;
    string nama;
    int umur;
};

int main() {
    Mahasiswa mhs[5];

    for (int i = 0; i < 5; i++) {
        mhs[i].no_urut = i + 1;
        cout << "Masukkan Nama Mahasiswa " << i + 1 << ": ";
        cin >> mhs[i].nama;
        cout << "Masukkan Umur: ";
        cin >> mhs[i].umur;
        cout << endl;
    }

    cout << "\n=== Data Mahasiswa No Urut 2 ===\n";
    cout << "No Urut: " << mhs[1].no_urut << endl;
    cout << "Nama   : " << mhs[1].nama << endl;
    cout << "Umur   : " << mhs[1].umur << endl;

    return 0;
}


