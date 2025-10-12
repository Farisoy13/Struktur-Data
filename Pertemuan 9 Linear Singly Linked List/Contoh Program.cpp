#include <iostream.h>
#include <stdlib.h>

struct SIMPUL {
    int INFO;
    struct SIMPUL *LINK;
};

SIMPUL *P, *FIRST, *LAST;

void BUAT_SIMPUL(int);

void main(void)
{
    int x;
    cout << "Masukan Data : ";
    cin >> x;

    BUAT_SIMPUL(x);

    cout << "Data : " << P->INFO << endl;
}

void BUAT_SIMPUL(int x)
{
    P = (SIMPUL *)malloc(sizeof(SIMPUL));
    if (P != NULL)
        P->INFO = x;
    else
        cout << "Pembuatan Simpul Gagal" << endl;
}
