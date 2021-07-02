#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

void selection_sort(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int len = *(&arr + 1) - arr;
    int size = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, len);
    printArray(arr, size);
    return 0;
}