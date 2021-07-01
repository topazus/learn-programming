#include <stdio.h>
#include <math.h>

// print all prime factors of a given number n
void primeFactors(int n)
{
    // even number
    while (n % 2 == 0)
    {
        printf("%d ", 2);
        n = n / 2;
        printf("number is %d\n", n);
    }

    // n is odd
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            n = n / i;
            printf("%d ", i);
            printf("number is %d\n", n);
        }
    }

    // n is a prime number greater than 2
    if (n > 2)
        printf("%d ", n);
}

int main()
{
    int n = 70;
    primeFactors(n);
    return 0;
}
