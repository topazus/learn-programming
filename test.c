#include <stdio.h>

void merge(int *arr, int l, int m, int r)
{
    int i, j;
    int n1 = m - l + 1;
    int n2 = r - m;
    int leftArr[n1], rightArr[n2];

    for (i = 0; i < n1; i++)
    {
        leftArr[i] = arr[l + i];
    }
    for (j = 0; j < n2; j++)
    {
        rightArr[j] = arr[m + 1 + j];
    }

    i = 0, j = 0;
    int k;
    for (k = l; k < r; k++)
    {
        if (i == (n1 - 1))
        {
            arr[k] = rightArr[j];
            j++;
        }
        else if (j == (n2 - 1))
        {
            arr[k] = leftArr[i];
            i++;
        }
        else if (leftArr[i] <= rightArr[j])
        {
            arr[k] = leftArr[i];
            i++;
        }
        else
        {
            arr[k] = leftArr[j];
            j++;
        }
    }
}

void merge_sort(int *arr, int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        merge_sort(arr, l, m);
        merge_sort(arr, m + 1, r);
        merge(arr, l, m, r);
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
    printArray(arr, n);
    merge_sort(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}