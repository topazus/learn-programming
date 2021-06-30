n = 10967535067

for i in range(2, n):
    if n % i == 0:
        maxPrime = n
        n = n // i
        print()
        if n == 1:
            print(maxPrime, "is the largest prime factor.")
            break
