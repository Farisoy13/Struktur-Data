#include <iostream>
using namespace std;

int main() {
    float x[5][8];
    unsigned int baseAddress = 0x1000; // &x[0][0] = 1000H
    unsigned int i = 2, j = 4;
    unsigned int cols = 8;
    unsigned int address = baseAddress + (i * cols + j) * sizeof(float);
    
    cout << hex << "&x[2][4] = " << address << "H" << endl;
    return 0;
}
