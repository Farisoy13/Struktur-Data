#include <iostream>
using namespace std;

// Fungsi Binary Search
int binarySearch(int arr[], int n, int key, int &langkah) {
    int left = 0;
    int right = n - 1;
    langkah = 0;

    while (left <= right) {
        langkah++;

        int mid = (left + right) / 2;

        cout << "Langkah ke-" << langkah
             << " | Cek indeks " << mid
             << " (nilai = " << arr[mid] << ")" << endl;

        if (arr[mid] == key) {
            return mid; // data ditemukan
        }
        else if (arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1; // data tidak ditemukan
}

int main() {
    int data[15] = {3, 7, 9, 12, 15, 18, 21, 25, 30, 35, 40, 45, 50, 55, 60};
    int cari, langkah;

    cout << "Data yang tersedia:\n";
    for (int i = 0; i < 15; i++) {
        cout << data[i] << " ";
    }

    cout << "\n\nMasukkan angka yang ingin dicari: ";
    cin >> cari;

    int hasil = binarySearch(data, 15, cari, langkah);

    if (hasil != -1) {
        cout << "\nData ditemukan pada indeks ke-" << hasil << endl;
        cout << "Jumlah langkah pencarian: " << langkah << endl;
    } else {
        cout << "\nData tidak ditemukan\n";
        cout << "Jumlah langkah pencarian: " << langkah << endl;
    }

    return 0;
}
