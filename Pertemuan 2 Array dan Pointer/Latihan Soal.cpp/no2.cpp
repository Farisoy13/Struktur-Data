#include <iostream>
using namespace std;

int main() {
    int x[15];
    unsigned int address_x3 = 0x1000; // &x[3] = 1000H
    unsigned int address_x9 = address_x3 + (9 - 3) * sizeof(int);
    
    cout << hex << "&x[9] = " << address_x9 << "H" << endl;
    return 0;
}
