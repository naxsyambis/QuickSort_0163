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

    pivot = arr[low]; // step 2
    i = low + 1; // step 3
    j = high; // step 4

    while (i <= j) // step 10
    {
        // mencari elemen yang lebih besar dari pivot tersebut
        while ((arr[i] <= pivot) && (j >= low)) // step 7
        {
            i++; // step 6
            cmp_count++;
        }
        cmp_count++;
		// mencari elemen yang kurang dari atau sama dengan pivot
		while ((arr[j] > pivot) && (j >= low)) //step 7
		{
			j--; // step 8
			cmp_count++;
		}
        cmp_count++;
        if (i < j) // step 9
        {
            // swap the element at index i with the element at index j
            swap(i, j);
        }
    }

    if (low < j) { // step 11
        // swap the pivot element with the element at index j
        swap(low, j);
    }
    // recursive call to sort the left sub array
    q_sort(low, j - 1); //step 12

    // recursive call to sort the right sub array
    q_sort(j + 1, high); // step 13
}



int main()
{
    
}

