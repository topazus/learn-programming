#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    int remainder;
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
    int n = 10403, loop = 1, count;
    int x_fixed = 2, x = 2, size = 2, factor = 1;
    while (factor == 1)
    {
        printf("loop: %d\n", loop);
        count = size;
        while (count && (factor == 1))
        {
            x = (x * x + 1) % n;
            factor = gcd(abs(x - x_fixed), n);
            printf("count = %d, x = %d, x_fixed = %d, factor = %d\n", size - count + 1, x, x_fixed, factor);
            count--;
        }
        size *= 2;
        x_fixed = x;
        loop += 1;
    }
    printf("factor = %d\n", factor);
    return factor == n ? EXIT_FAILURE : EXIT_SUCCESS;
}