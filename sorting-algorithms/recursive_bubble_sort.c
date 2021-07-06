#include <stdio.h>
#include <stdbool.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void rec_buble_sort(int arr[], int n)
{
    if (n == 1)
    {
        return;
    }
    // In the first loop, move the largest element to the end.
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(&arr[i], &arr[i + 1]);
        }
    }
    rec_buble_sort(arr, n - 1);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d%s", arr[i], i == n - 1 ? "\n" : " ");
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int len = *(&arr + 1) - arr;
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    rec_buble_sort(arr, len);
    printArray(arr, size);
    return 0;
}