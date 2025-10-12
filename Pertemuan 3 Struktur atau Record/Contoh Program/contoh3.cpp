#include <iostream>
using namespace std;

struct Pribadi {
    char nama[50];
    int usia;
    float gaji;
};

// deklarasi fungsi
Pribadi getData(Pribadi);
void displayData(Pribadi);

int main() {
    Pribadi p;

    p = getData(p);
    displayData(p);

    return 0;
}

Pribadi getData(Pribadi p) {
    cout << "Masukkan nama  : ";
    cin >> p.nama;
    cout << "Masukkan usia  : ";
    cin >> p.usia;
    cout << "Masukkan gaji  : ";
    cin >> p.gaji;
    return p;
}

void displayData(Pribadi p) {
    cout << "\nData Pribadi:" << endl;
    cout << "Nama : " << p.nama << endl;
    cout << "Usia : " << p.usia << endl;
    cout << "Gaji : " << p.gaji << endl;
}

