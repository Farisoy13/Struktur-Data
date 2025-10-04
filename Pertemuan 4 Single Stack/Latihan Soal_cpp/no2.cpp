#include <iostream>
using namespace std;

int main() {
    int S[10];
    int top = -1;
    int data;

    cout << "Program PUSH sampai penuh dan POP sampai kosong\n";
    cout << "----------------------------------------------\n";

    // Proses PUSH
    while (true) {
        cout << "Masukkan data (999 untuk berhenti): ";
        cin >> data;

        if (data == 999)
            break;

        if (top < 9) {
            top++;
            S[top] = data;
            cout << "Data " << data << " berhasil di-PUSH.\n";
        } else {
            cout << "Stack Penuh! Tidak bisa menambah data lagi.\n";
            break;
        }
    }

    // Proses POP
    cout << "\nMengeluarkan isi Stack:\n";
    while (top >= 0) {
        cout << S[top] << endl;
        top--;
    }

    cout << "Stack sekarang kosong.\n";
    return 0;
}

