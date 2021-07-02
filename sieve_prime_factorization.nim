import math
import algorithm
const len=1000

proc Sieve_of_Eratosthenes(n: int)=
    # initialize the array and fill all its elements with true
    var a: array[len, bool]
    a.fill(true)

    for i in 2..int(sqrt(n.float)):
        if a[i]:
            for j in countup(i*i, n, i):
                if a[j]:
                    a[j]=false

    var prime: seq[int] = @[]
    for i in 2..n:
        if a[i]:
            prime.add(i)
    echo prime

proc least_prime_factor(n: int)=
    var a: array[len, int]
    a.fill(0)

    for i in countup(2, n):
        if a[i]==0:
            a[i]=i
            for j in countup(i*i, n, i):
                if a[j]==0:
                    a[j]=i

    var num: seq[int]
    for i in 2..n:
        num.add(i)
    echo "the least prime factor is"
    echo num
    echo a[2 .. n]

proc sieve(n: int)=
    var spf: array[len, int]
    spf.fill(0)

    for i in countup(2, n):
        if spf[i]==0:
            spf[i]=i
            for j in countup(i*i, n, i):
                if spf[j]==0:
                    spf[j]=i
    echo "the prime factors of ", n, ":"
    var factors: seq[int]
    var num=n
    while num != 1:
        factors.add(spf[num])
        num=num div spf[num]
    echo factors

var n=100
Sieve_of_Eratosthenes(n)
least_prime_factor(n)
sieve(n)