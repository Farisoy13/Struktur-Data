#include <iostream>
using namespace std;

#define MAX 10  // kapasitas stack

int main() {
    int S[MAX];    // array stack
    int TOP = -1;  // posisi atas stack
    int data;

    cout << "=== Program Stack (PUSH/POP Otomatis) ===" << endl;

    while (true) {
        cout << "Input data (999 untuk selesai): ";
        cin >> data;

        if (data == 999) break;  // proses berhenti

        if (data >= 60) {  // proses PUSH
            if (TOP == MAX - 1) {
                cout << "Stack Penuh!" << endl;
                break;
            } else {
                TOP++;
                S[TOP] = data;
                cout << data << " disimpan ke Stack (PUSH)" << endl;
            }
        } else {  // data < 60 → proses POP
            if (TOP == -1) {
                cout << "Stack Kosong!" << endl;
                break;
            } else {
                cout << "Mengambil data dari Stack: " << S[TOP] << endl;
                TOP--;
            }
        }
    }

    cout << "\nProses selesai." << endl;
    return 0;
}


