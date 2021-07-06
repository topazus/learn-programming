#include <stdio.h>

int binarySearch(int arr[], int item, int low, int high)
{
    if (high <= low)
        return (item > arr[low]) ? (low + 1) : low;

    int mid = (low + high) / 2;

    if (item == arr[mid])
        return mid + 1;

    if (item > arr[mid])
        return binarySearch(arr, item, mid + 1, high);
    return binarySearch(arr, item, low, mid - 1);
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        print("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int size = *(&arr + 1) - arr;
    insertion_sort(arr, n);
    printArray(arr, size);
    return 0;
}