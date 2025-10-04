#include <iostream>
using namespace std;

int main() {
    long x[12][14];
    unsigned int baseAddress = 0x1000; // &x[0][0] = 1000H
    unsigned int i = 2, j = 4;
    unsigned int cols = 14;
    unsigned int address = baseAddress + (i * cols + j) * sizeof(long);
    
    cout << hex << "&x[2][4] = " << address << "H" << endl;
    return 0;
}
