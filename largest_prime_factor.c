#include <stdio.h>
#include <math.h>

int largest_prime_factor_2(long int n)
{
  long int maxPrime;
  while (n % 2 == 0)
  {
    maxPrime = 2;
    n /= 2;
  }

  for (int i = 3; i <= sqrt(n); i += 2)
  {
    while (n % i == 0)
    {
      maxPrime = i;
      n = n / i;
    }
  }

  if (n > 2)
  {
    maxPrime = n;
  }
  printf("%d is the largest prime factor.\n", maxPrime);
}

int lpf(long int n)
{
  long int maxPrime;
  for (int i = 2; i <= n; i++)
  {
    if (n % i == 0)
    {
      maxPrime = n;
      n = n / i;
      if (n == 1)
      {
        printf("%d is the largest prime factor.\n", maxPrime);
        break;
      }
    }
  }
}

int main()
{
  long int num = 600851475143;
  largest_prime_factor_2(num);
  lpf(num);
}