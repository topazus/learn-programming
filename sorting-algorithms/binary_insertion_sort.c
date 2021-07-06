#include <stdio.h>

int binary_search(int arr[], int item, int low, int high)
{
    if (high <= low)
    {
        return (item > arr[low]) ? (low + 1) : low;
    }
    int mid = (low + high) / 2;

    if (item == arr[mid])
        return mid + 1;

    if (item > arr[mid])
        return binary_search(arr, item, mid + 1, high);
    return binary_search(arr, item, low, mid - 1);
}

void binary_insert_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int selected = arr[i];
        int loc = binary_search(arr, selected, 0, j);
        while (j >= loc)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = selected;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d%s", arr[i], i == n - 1 ? "\n" : " ");
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    binary_insert_sort(arr, n);
    printArray(arr, n);
    return 0;
}