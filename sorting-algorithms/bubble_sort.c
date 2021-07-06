#include <stdio.h>
#include <stdbool.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void bubble_sort_opt(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        // if there is no swap in the current inner loop,
        // break the whole loop
        if (swapped == false)
        {
            break;
        }
    }
}

void bubbleSort(int *a, int n)
{
    int j = n;
    bool s;
    while (s)
    {
        s = false;
        for (int i = 0; i < j; i++)
        {
            if (a[i] > a[i + 1])
            {
                swap(&a[i], &a[i + 1]);
                s = true;
            }
        }
        j--;
    }
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