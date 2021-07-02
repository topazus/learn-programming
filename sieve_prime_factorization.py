from math import sqrt


def Sieve_of_Eratosthenes(n):
    a = [True for i in range(n)]
    for i in range(2, int(sqrt(n))):
        if a[i]:
            for j in range(i * i, n, i):
                if a[j]:
                    a[j] = False
    prime = []
    for i in range(2, n):
        if a[i]:
            prime.append(i)
    print(prime)


def least_prime_factor(n):
    a = [0] * n
    for i in range(2, n):
        if a[i] == 0:
            a[i] = i
            for j in range(i * i, n, i):
                if a[j] == 0:
                    a[j] = i
    print("the least prime factor is")
    num = [0] * n
    for i in range(n):
        num[i] = i
    print(num[2:n])
    print(a[2:n])


def sieve(n):
    lpf = [0] * (n + 1)
    for i in range(2, n + 1):
        if lpf[i] == 0:
            lpf[i] = i
            for j in range(i * i, n + 1, i):
                if lpf[j] == 0:
                    lpf[j] = i
    factors = []
    while n != 1:
        factors.append(lpf[n])
        n //= lpf[n]
    print("the number's prime factorization is", factors)


n = 100
Sieve_of_Eratosthenes(n)
least_prime_factor(n)
sieve(n)