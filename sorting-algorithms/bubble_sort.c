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

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int len = *(&arr + 1) - arr;
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("the unsorted array: ");
    printArray(arr, size);
    rec_buble_sort(arr, len);
    printf("\nthe sorted array: ");
    printArray(arr, size);
    return 0;
}