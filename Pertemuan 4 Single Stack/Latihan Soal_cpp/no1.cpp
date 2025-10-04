#include <iostream>
using namespace std;

int main() {
    int S[10];       // Stack berukuran 10 elemen
    int top = -1;    // Menunjukkan posisi atas stack
    int data;

    cout << "Program Stack 1 Dimensi (PUSH dan POP berdasarkan nilai input)\n";
    cout << "----------------------------------------------\n";

    while (true) {
        cout << "Masukkan data (999 untuk selesai): ";
        cin >> data;

        if (data == 999) {
            cout << "Proses selesai.\n";
            break;
        }

        if (data >= 60) { // Proses PUSH
            if (top < 9) {
                top++;
                S[top] = data;
                cout << data << " telah disimpan ke Stack.\n";
            } else {
                cout << "Stack Penuh!\n";
                break;
            }
        } else { // data < 60 → POP
            if (top >= 0) {
                cout << "Mengeluarkan data: " << S[top] << endl;
                top--;
            } else {
                cout << "Stack Kosong!\n";
                break;
            }
        }
    }

    return 0;
}

