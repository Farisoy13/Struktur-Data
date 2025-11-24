// Program C++ : linear search
#include<iostream>
using namespace std;

void search_element(int arr[], int search, int Element)
{
    int left = 0;
    int right = Element - 1;
    int position = -1;

    // lakukan perulangan dari kiri ke kanan
    for (left = 0; left <= right; left++)
    {
        // Jika search, element ditemukan dengan
        // nilai arr[left]
        if (arr[left] == search)
        {
            position = left;
            cout<< "Element ditemukan dalam Array di "
                << position+1 << " Posisi dan di index ke "
                << left << " \n" ;
            break;
        }
    }

    // jika elemen tidak ditemukan dari
    // variabel search, element
    if (position == -1)
        cout<< "Element tidak ditemukan dalam Array di "
            << left << " Attempts\n" ;
}

int main()
{
    int arr[] = {1,2,3,4,5,6} ;
    int search = 4 ;
    int Element = sizeof(arr)/sizeof(arr[0]) ;

    // Function call
    search_element(arr, search, Element) ;

    return 0 ;
}
