#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
using namespace std;


int main() {
int data[10];
srand(time(0));


cout << "Data awal: ";
for (int i = 0; i < 10; i++) {
data[i] = rand() % 100 + 1;
cout << data[i] << " ";
}
cout << endl << endl;


for (int i = 0; i < 9; i++) {
for (int j = 0; j < 9 - i; j++) {
cout << "Bandingkan " << data[j] << " dan " << data[j+1] << endl;
if (data[j] > data[j+1]) {
swap(data[j], data[j+1]);
cout << " Ditukar: ";
} else {
cout << " Tidak ditukar: ";
}
for (int k = 0; k < 10; k++) cout << data[k] << " ";
cout << endl;
this_thread::sleep_for(chrono::milliseconds(500));
}
cout << endl;
}


cout << "Data akhir (terurut): ";
for (int i = 0; i < 10; i++) cout << data[i] << " ";
return 0;
}
