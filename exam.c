#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define LEN 1001

void Sieve_of_Eratosthenes(int n)
{
    // intialzie a bool array to store the value of is_prime
    bool num[LEN] = {[0 ...(LEN - 1)] = true};
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (num[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                num[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (num[i])
        {
            printf("%d ", num[i]);
        }
    }
}

int main()
{
    int n = 100;
    Sieve_of_Eratosthenes(n);
    return 0;
}