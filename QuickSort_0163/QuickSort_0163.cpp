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

int main()
{
    
}

