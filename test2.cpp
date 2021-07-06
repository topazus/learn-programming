#include <iostream>
using namespace std;

void rec_buble_sort(int arr[], int n)
{
    // In the first loop, move the largest element to the end.
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    rec_buble_sort(arr, n - 1);
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{
    int a[] = {37, 23, 0, 17, 12, 72, 31, 46, 100, 88, 54};
    int n = sizeof(a) / sizeof(a[0]);
    printArray(a, n);
    rec_buble_sort(a, n);
    printArray(a, n);
    return 0;
}