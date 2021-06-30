#include <bits/stdc++.h>
using namespace std;

long long int modular_pow(long long int base, int exponent, long long int modulus)
{
    long long int res = 1;
    while (exponent > 0)
    {
        if (exponent & 1)
        {
            res = (res * base) % modulus;
        }
        exponent = exponent >> 1; // exponent = exponent / 2;
        base = (base * base) % modulus;
    }
    return res;
}

long long int PollardRho(long long int n)
{
    srand(time(NULL));
    if (n == 1)
        return n;
    if (n % 2 == 0)
        return 2;

    long long int x = 2;
    long long int y;
    long long int c = 1;
    long long int factor = 1;
    while (factor == 1)
    {
        x = (x * x + 1) % n;
        y = (x * x + 1) % n;
        factor = __gcd(abs(x - y), n);
        printf("x = %d, y = %d, d = %d\n", x, y, factor);
        if (factor == n)
            return PollardRho(n);
    }
    return factor;
}

int main()
{
    long long int n = 10967535067;
    // %lld for long long int data type.
    printf("One of the divisors for %lld is %lld.\n", n, PollardRho(n));
    return 0;
}