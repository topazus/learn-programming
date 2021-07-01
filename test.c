#include <stdio.h>
#include <stdbool.h>

#define LEN 1001

void sieve(int n)
{
    int spf[LEN] = {0};
    // initialize the array and set all of its elements to 0
    for (int i = 2; i <= LEN; i++)
    {
        if (spf[i] == 0)
        {
            spf[i] = i;
            for (int j = i * i; j <= LEN; j += i)
            {
                if (spf[j] == 0)
                {
                    spf[j] = i;
                }
            }
        }
    }

    int arr[LEN] = {};
    int num = n;
    printf("the prime factor of %d is ", n);
    int start = 0;
    while (n != 1)
    {
        arr[start] = spf[n];
        n /= spf[n];
        start += 1;
    }

    for (int i = 0; i < start; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n = 20;
    sieve(n);
    return 0;
}