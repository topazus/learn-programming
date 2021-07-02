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
    int prime[LEN] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (num[i])
        {
            prime[i - 2] = i;
        }
    }
    for (int i = 0; i <= n; i++)
    {
        if (prime[i] != 0)
        {
            printf("%d ", prime[i]);
        }
    }
}

void least_prime_factor(int n)
{
    // intialize a vector to store least prime
    int least_prime[LEN] = {0};
    for (int i = 2; i < n; i++)
    {
        // if i is prime
        if (least_prime[i] == 0)
        {
            // least prime factor of the prime number is itself
            least_prime[i] = i;
            for (int j = i * i; j <= n; j += i)
            {
                // to gurantee that prime factor of the number is least
                // eg, 6 = 2 * 3
                if (least_prime[j] == 0)
                {
                    least_prime[j] = i;
                }
            }
        }
    }
    for (int i = 2; i < n; i++)
    {
        printf("the least prime factor of %d is %d\n", i, least_prime[i]);
    }
}

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
    int n = 100;
    Sieve_of_Eratosthenes(n);
    least_prime_factor(n);
    sieve(n);
    return 0;
}