#include <iostream>
using namespace std;

#define MAX 10

int main() {
    int S[MAX];       // array stack
    int TOP = -1;     // posisi atas stack
    int data;

    // isi stack dulu (contoh manual biar bisa diuji)
    for (int i = 0; i < 5; i++) {   // contoh isi 5 data
        cout << "Masukkan data ke-" << i + 1 << ": ";
        cin >> data;
        TOP++;
        S[TOP] = data;
    }

    // proses POP sampai stack kosong
    cout << "\nMengeluarkan isi stack:\n";
    while (TOP != -1) {
        cout << "Data keluar (POP): " << S[TOP] << endl;
        TOP--;
    }

    cout << "Stack sekarang kosong!" << endl;
    return 0;
}


