
#include <stdio.h>

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
    for (int i = 0; i < n; i++)
    {
        aux[i] = arr[i];
    }
    printArray(aux, n);
    return 0;
}
