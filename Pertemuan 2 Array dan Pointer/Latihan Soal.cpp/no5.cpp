#include <iostream>
using namespace std;

int main() {
    int x[2][3][5];
    unsigned int address_114 = 0x12EF; // &x[1][1][4] = 12EFH
    unsigned int a1=1, b1=1, c1=4;
    unsigned int a0=0, b0=0, c0=3;
    unsigned int dimB = 3, dimC = 5;

    // posisi elemen dalam memori
    unsigned int pos1 = a1 * (dimB * dimC) + b1 * dimC + c1;
    unsigned int pos0 = a0 * (dimB * dimC) + b0 * dimC + c0;

    unsigned int selisih = (pos1 - pos0) * sizeof(int);
    unsigned int address_target = address_114 - selisih;

    cout << hex << "&x[0][0][3] = " << address_target << "H" << endl;
    return 0;
}
