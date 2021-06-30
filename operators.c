#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int int_to_bin_(int k)
{
    if (k == 0)
        return 0;
    if (k == 1)
        return 1;
    return (k % 2) + 10 * int_to_bin_(k / 2);
}

// convert integer to string
int int_to_bin(int k)
{
    return (k == 0 || k == 1 ? k : ((k % 2) + 10 * int_to_bin(k / 2)));
}

int left_and_rigth_shift(int a, int b)
{
    printf("a = %d, binary = %d, a<<1 = %d, binary = %d\n", a, int_to_bin(a), a << 1, int_to_bin(a << 1));
    printf("b = %d, binary = %d, b<<1 = %d, binary = %d\n", b, int_to_bin(b), b << 1, int_to_bin(b << 1));
    printf("a = %d, binary = %d, a>>1 = %d, binary = %d\n", a, int_to_bin(a), a >> 1, int_to_bin(a >> 1));
    printf("b = %d, binary = %d, b>>1 = %d, binary = %d\n", b, int_to_bin(b), b >> 1, int_to_bin(b >> 1));
    return 0;
}

int bitwise(int a, int b)
{
    printf("a = %d, binary = %d, b = %d, binary = %d\n", a, int_to_bin(a), b, int_to_bin(b));
    printf("a & b = %d\n", int_to_bin(a & b));

    // The & operator can be used to quickly check if a number is odd or even.
    // (x & 1) would be non-zero only if x is odd, otherwise the value would be zero.
    srand(time(NULL));
    int x = rand() % 50;
    (x & 1) ? printf("%d is even\n", x) : printf("%d is odd\n", x);
    return 0;
}

int main()
{
    left_and_rigth_shift(5, 9);
    bitwise(2, 3);
    return 0;
}