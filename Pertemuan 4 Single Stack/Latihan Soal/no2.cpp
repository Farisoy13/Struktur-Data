#include <iostream>
using namespace std;

#define MAX 10

int main() {
    int S[MAX];
    int TOP = -1;
    int data;

    cout << "=== Program PUSH sampai penuh, lalu POP sampai kosong ===" << endl;

    // Proses PUSH
    while (true) {
        cout << "Masukkan data (999 untuk selesai): ";
        cin >> data;

        if (data == 999) break;

        if (TOP == MAX - 1) {
            cout << "Stack Penuh!" << endl;
            break;
        } else {
            TOP++;
            S[TOP] = data;
            cout << data << " disimpan ke Stack." << endl;
        }
    }

    // Proses POP
    cout << "\nMengeluarkan isi stack:\n";
    while (TOP != -1) {
        cout << "Data keluar: " << S[TOP] << endl;
        TOP--;
    }

    cout << "Stack sekarang kosong.\n";
    return 0;
}


