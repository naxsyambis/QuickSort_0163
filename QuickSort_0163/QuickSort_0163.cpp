#include <iostream>
using namespace std;

// array bilangan bulat untuk menyimpan nilai
int arr[20];
int cmp_count = 0; // jumlah perbandingan
int mov_count = 0; // jumlah pergerakan data
int n;

void input() {
    while (true) {
        cout << "Masukkan panjang elemen arrya :";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "\nMaksimum panjang array adalah 20" << endl;
    }

    cout << "\n-------------------" << endl;
    cout << "\nEnter Array Element" << endl;
    cout << "\n-------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << "<";
        cin >> arr[i];
    }
}

// Menukar elemen pada indeks x dengan elemen pada indeks y
void swap(int x, int y)
{
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
    mov_count++;
}

void q_sort(int low, int high)
{
    int temp;
    int pivot, i, j;
    if (low > high) { // step 1
        return;
    }


int main()
{
    
}

