#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
    //deklarasi variabel statis
    int j, k, i, temp;
    int jmax, banyak;

    //memasukkan banyak nilai yang ditampung
    cout << "Masukkan banyak nilai pada elemen array : ";
    cin >> banyak;

    //deklarasi variabel dinamis
    int A[banyak];
    int u = banyak - 1;

    //memasukkan nilai sebelum diurutkan
    cout << "Masukkan nilai pada elemen array :" << endl;
    for (i = 0; i < banyak; i++)
    {
        cout << "A[" << i << "] =";
        cin >> A[i];
    }

    //Proses pengurutan secara menaik (Ascending)
    for (j = 0; j < banyak; j++)
    {
        jmax = 0;
        for (k = 1; k <= u; k++)
        {
            if (A[k] > A[jmax])
            {
                jmax = k;
            }
        }
        temp = A[u];
        A[u] = A[jmax];
        A[jmax] = temp;
        u--;
    }
    //menampilkan nilai setelah diurutkan
    cout << "\nNilai setelah diurutkan =" << endl;
    for (i = 0; i < banyak; i++)
    {
        cout << A[i] << " ";
    }
}