#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define LEN 1001

void Sieve_of_Eratosthenes(int n)
{
    // intialzie a bool array to store the value of is_prime
    int num[LEN] = {};

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", num[i]);
    }
}

int main()
{
    int n = 100;
    Sieve_of_Eratosthenes(n);
    return 0;
}