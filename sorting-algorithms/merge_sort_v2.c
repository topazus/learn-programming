#include <stdio.h>

void merge_sort(int *arr, int l, int r, int *aux)
{
    if (r <= l)
    {
        return;
    }
    int mid = l + (r - l) / 2;

    // left sub-array is a[i .. mid]
    // right sub-array is a[mid + 1 .. j]
    merge_sort(arr, l, mid, aux);
    merge_sort(arr, mid + 1, r, aux);

    int i = l;
    int j = mid + 1;
    int k;
    for (k = l; k <= r; k++)
    {
        if (i == mid + 1)
        { // left pointer has reached the limit
            aux[k] = arr[j];
            j++;
        }
        else if (j == r + 1)
        { // right pointer has reached the limit
            aux[k] = arr[i];
            i++;
        }
        else if (arr[i] < arr[j])
        { // pointer left points to smaller element
            aux[k] = arr[i];
            i++;
        }
        else
        { // pointer right points to smaller element
            aux[k] = arr[j];
            j++;
        }
    }
    for (k = l; k <= r; k++)
    {
        arr[k] = aux[k];
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
    int aux[n];
    printArray(arr, n);
    merge_sort(arr, 0, n - 1, aux);
    printArray(arr, n);
    return 0;
}