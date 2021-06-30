#include <stdio.h>
#include <stdlib.h>

long long int gcd(long long int a, long long int b)
{
    long long int remainder;
    while (b != 0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main()
{
    long long int n = 10967535067;
    long long int loop = 1, count;
    long long int x_fixed = 2, x = 2, size = 2, factor = 1;
    while (factor == 1)
    {
        printf("loop: %lld\n", loop);
        count = size;
        while (count && (factor == 1))
        {
            x = (x * x + 1) % n;
            factor = gcd(abs(x - x_fixed), n);
            printf("count = %lld, x = %lld, x_fixed = %lld, factor = %lld\n", size - count + 1, x, x_fixed, factor);
            count--;
        }
        size *= 2;
        x_fixed = x;
        loop += 1;
    }
    printf("factor = %lld\n", factor);
    return factor == n ? EXIT_FAILURE : EXIT_SUCCESS;
}