#include <stdio.h>
#include <math.h>

int prime_factor(unsigned long long num)
{
    unsigned long long n = num, factor;
    const int len = 100;
    unsigned long long factors[len];
    int x = 0;
    // even number
    while (n % 2 == 0)
    {
        factors[x] = 2;
        x++;
        n /= 2;
    }

    for (int i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            factors[x] = i;
            x++;
            n = n / i;
        }
    }

    if ((n > 2) & (x == 0))
    {
        printf("%llu is a prime number\n", n);
    }
    else
    {
        factors[x] = n;
        x++;
    }

    printf("the prime factor of %llu is ", num);
    for (int i = 0; i <= x - 1; i++)
    {
        printf("%llu ", factors[i]);
    }
}

int lpf(unsigned long long n)
{
    unsigned long long factor;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            factor = n;
            n = n / i;
            if (n == 1)
            {
                printf("%d is the largest prime factor.\n", factor);
                break;
            }
        }
    }
}

int main()
{
    unsigned long long num1 = 14695981039346656037ULL;
    prime_factor(num1);
}