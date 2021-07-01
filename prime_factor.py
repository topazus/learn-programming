from math import sqrt


def prime_factors(num):
    factors = []
    isPrime = 1
    n = num
    while n % 2 == 0:
        factors.append(2)
        n //= 2
        isPrime = 0
    for i in range(3, int(sqrt(n)) + 1):
        while n % i == 0:
            isPrime = 0
            factors.append(i)
            n //= i
    if (n > 2) & isPrime:
        print(num, "is prime number")
    else:
        factors.append(n)
        print(factors)


num = 987654321
prime_factors(num)
