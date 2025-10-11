#include <iostream>
using namespace std;

#define MAX 10

int main() {
    int S[MAX];
    int TOP = -1;
    int data;

    // PUSH sampai stack penuh
    while (TOP < MAX - 1) {
        cout << "Masukkan data: ";
        cin >> data;
        TOP++;
        S[TOP] = data;
        cout << data << " berhasil di-PUSH ke Stack" << endl;
    }
    cout << "Stack sudah penuh!" << endl;

    return 0;
}


