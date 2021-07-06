#include <iostream>
using namespace std;

void bubble_sort(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
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
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // if no two elements were swapped by inner loop, then break
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
    cout << "the initial array: ";
    printArray(a, n);
    rec_buble_sort(a, n);
    cout << "\nthe sorted array: ";
    printArray(a, n);
    return 0;
}